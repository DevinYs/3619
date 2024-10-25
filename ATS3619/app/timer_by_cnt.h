#include "basic.h"

#define MAX_TIMER_NUM 10
#define RUNNING_FOREVER 4294967295



extern void timer_init(void);
extern uint8 timer_create(uint32 tmr_cnt, uint32 tmr_times, uint32 delay, void (*tmr_cb)(void));
extern int timer_delete(uint8 tmr_no);
extern void timer_stop(uint8 tmr_no);
extern void timer_run(void);
extern void timer_cb_room_cal_upload_pause1(void);
extern void timer_cb_room_cal_upload_pause2(void);
extern void timer_cb_sys_heartbeat_msg_send(void);
extern void timer_cb_DMIC_RMS_report(void);
extern void timer_cb_uart_DMIC_RMS_report(void);
extern void timer_cb_uart_room_cal_upload_pause1(void);
extern void timer_cb_uart_room_cal_upload_pause2(void);
extern void timer_cb_uart_room_cal_status_report(void);
extern void timer_cb_room_cal_status_report(void);
