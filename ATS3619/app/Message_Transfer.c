// Message_Transfer.c
#include <string.h>
#include "Message_Transfer.h"

void DSP_InitMessage(dspMessage* msg, uint8 company, uint8 processor, uint8 board)

{	msg->mHeader[MSG_SOC2DSP] = MSG_HEADER_SOC2DSP;
	msg->mHeader[MSG_DSP2SOC] = MSG_HEADER_DSP2SOC;
	msg->mChipset = ((company   & MSG_COMPANY_MASK)   << MSG_COMPANY_LOCATOR)
                  | ((processor & MSG_PROCESSOR_MASK) << MSG_PROCESSOR_LOCATOR)
                  | ((board     & MSG_BOARD_MASK)     << MSG_BOARD_LOCATOR);
}

void DSP_AppendMessage(dspMessage* msg, void* data, uint8 size)
{
	memcpy(msg->mMessage + msg->mPosition, data, size);
	msg->mPosition += size;
}

void DSP_AppendHeader(dspMessage* msg, uint8 dir, uint8 cmd)
{
	uint8 header = msg->mHeader[dir];
	uint8 chipset = msg->mChipset;
	uint8 length = 0;

	memset(msg->mMessage, 0, MSG_SIZE_MESSAGE);
	msg->mPosition = 0;

	DSP_AppendMessage(msg, &header,  MSG_SIZE_HEAD);
	DSP_AppendMessage(msg, &chipset, MSG_SIZE_CHIP);
	DSP_AppendMessage(msg, &length,  MSG_SIZE_LENG);
	DSP_AppendMessage(msg, &cmd,     MSG_SIZE_COMD);
}

void DSP_AppendChkSum(dspMessage* msg)
{
	uint32 loop;
	uint8 checksum = 0;
	uint8* message = msg->mMessage;
	uint8 pos = msg->mPosition;

	message[MSG_POS_LENG] = (pos - MSG_OFS_LENG);
	for (loop = 0; loop < pos; loop++) { checksum ^= message[loop]; }
	DSP_AppendMessage(msg, &checksum, MSG_SIZE_CSUM);
}

uint8 DSP_CmdMapping(uint8 cmd_id)
{
	uint8 ret;
	switch(cmd_id)
	{
		case MSG_COMMAND_PROJECTID:
			ret = MSG_COMMAND_PROJECTID;
		break;
		default:
			ret = MSG_COMMAND_HANDSHAKE;
		break;
	}

	return ret;
}
