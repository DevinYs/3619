/********************************************************************************
 *                            USDK(LARK_brom_FPGA_A)
 *                            Module: SYSTEM
 *                 Copyright(c) 2003-2040 Actions Semiconductor,
 *                            All Rights Reserved.
 *
 * History:
 *      <author>      <time>                      <version >          <desc>
 *      liaotianyang   2021-4-25             1.0             build this file
 ********************************************************************************/
/*!
 * \file     printk.c
 * \brief
 * \author
 * \version  1.0
 * \date   2021-4-25
 *******************************************************************************/
#include "basic.h"

#include <stdarg.h>
#include <ctype.h>
#include "uart.h"
#include "printk.h"


#define _SIGN     1  // �з���
#define _ZEROPAD  2  // 0 ǰ׺
#define _LARGE    4  // ��д

/* �к�תΪ�ַ���
 */
#define  _S_LINE(_x)  #_x
#define __S_LINE(_x)  _S_LINE(_x)
#define __S_LINE__   __S_LINE(__LINE__)

#define LINESEP_FORMAT_WINDOWS  0

#define LINESEP_FORMAT_UNIX     1


#if 0
/*!
 * \brief �Ƿ�Ϊʮ��������.
 */
#define isdigit(_c)  (('0' <= (_c)) && ((_c) <= '9'))

/*!
 * \brief �Ƿ�ΪСд��ĸ.
 */
#define islower(_c)  (('a' <= (_c)) && ((_c) <= 'z'))

/*!
 * \brief ת��Ϊ��д��ĸ.
 */
#define toupper(_c)  (islower(_c) ? (((_c) - 'a') + 'A') : (_c))
#endif

#define _putc(_str, _end, _ch)  \
do                              \
{                               \
    if (_str < _end)            \
    {				\
        *_str = _ch;            \
        _str++;                 \
    }				\
}                               \
while (0)


//��������ĸ�ʽ���������,��Ҫע����windowsƽ̨��unixƽ̨���ڻ��з��Ĵ����ǲ�һ����
//windows���з�Ҫ��\r\n,��unixƽ̨���з�Ϊ\n
//��˶ഫ��һ�����������ֿ���
//%c:����ַ�
//%s:����ַ���
//%x:���ʮ����������
int act_vsnprintf(char* buf, int size, uint32 linesep, const char* fmt, va_list args)
{
    char*  str = buf;
    char*  end = buf + size - 1;

    if (end < buf - 1)
        end = (char*)-1;

    for (; *fmt != '\0'; fmt++)
    {
        uint32  flags;
        int     width;
        int     precision;

        uint32  number;
        uint32  base;

        char    num_str[16];
        int     num_len;
        int     sign;

        if (*fmt != '%')
        {
            if(linesep == LINESEP_FORMAT_WINDOWS)
            {
                //windowsƽ̨��\nǰ�����\r
                if(*fmt == '\n')
                    _putc(str, end, '\r');
            }
            _putc(str, end, *fmt);
            continue;
        }

        fmt++;

        flags = 0;
        width = 0;
        precision = 0;
        base = 10;

        if (*fmt == '0')
        {
            flags |= _ZEROPAD;
            fmt++;
        }

        while (isdigit(*fmt))
        {
            width = (width * 10) + (*fmt - '0');
            fmt++;
        }

        if (*fmt == '.')
        {
            fmt++;

            while (isdigit(*fmt))
            {
                precision = (precision * 10) + (*fmt - '0');
                fmt++;
            }

            if (width < precision)
                width = precision;

            flags |= _ZEROPAD;
        }

        switch (*fmt)
        {
            case 'c':
            {
                uint8  ch = (uint8)va_arg(args, int);

                _putc(str, end, ch);
                continue;
            }

            case 's':
            {
                char*  s = va_arg(args, char*);

                if (s == (void*)0)
                {
                    char*  rodata_s = "<NULL>";
                    s = rodata_s;
                }

                while (*s != '\0')
				{
                    if(linesep == LINESEP_FORMAT_WINDOWS)
                    {
    					if( (*s == '\r') && (*(s+1) != '\n') ) 		/* ����ִ������������س�\r(0x0d)������û�и��Ż���\n(0x0a)������ */
    					{
    						_putc( str, end, '\r' );
    						_putc( str, end, '\n' );
    						s++;
    					}
    					else
    					{
    						_putc(str, end, *s);
                            s++;
    					}
                    }
                    else
                    {
						_putc(str, end, *s);
                        s++;
                    }
				}

                continue;
            }

            case 'X':
                flags |= _LARGE;

            case 'x':
            case 'p':
                base = 16;
                break;

            /* integer number formats - set up the flags and "break" */
            case 'o':
                base = 8;
                break;

            case 'd':
            case 'i':
                flags |= _SIGN;

            case 'u':
                break;

            case '%':
            {
                _putc(str, end, '%');
                continue;
            }

            default:
                continue;
        }

        number = va_arg(args, uint32);

        sign = 0;
        num_len = 0;

        if (flags & _SIGN)
        {
            if ((int)number < 0)
            {
                number = -(int)number;

                sign = '-';
                width -= 1;
            }
        }

        if (number == 0)
        {
            num_str[num_len++] = '0';
        }
        else
        {
            const char*  digits = "0123456789abcdef";

            while (number != 0)
            {
                char  ch = digits[number % base];

                if (flags & _LARGE)
                    ch = toupper(ch);

                num_str[num_len++] = ch;
                number /= base;
            }
        }

        width -= num_len;

        if (!(flags & _ZEROPAD))
        {
            while (width-- > 0)
                _putc(str, end, ' ');
        }

        if (sign != 0)
            _putc(str, end, sign);

        if (flags & _ZEROPAD)
        {
            while (width-- > 0)
                _putc(str, end, '0');
        }

        while (num_len-- > 0)
            _putc(str, end, num_str[num_len]);
    }

    if (str <= end)
        *str = '\0';

    else if (size > 0)
        *end = '\0';

    return (str - buf);
}


int printk(const char *fmt, ...)
{
	va_list args;
	int trans_len;
	char debug_buf[PRINT_BUF_SIZE];
	va_start(args, fmt);
	trans_len = act_vsnprintf(debug_buf, PRINT_BUF_SIZE, LINESEP_FORMAT_WINDOWS, fmt, args);
	va_end(args);

    uart_send_data(debug_buf, trans_len);
	return trans_len;
}
