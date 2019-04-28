#ifndef __WATCH_H__
#define __WATCH_H__

#include "../key/key_ink_screen.h"
#include "../voice/asr.h"
#include "../voice/weather.h"
#include "../time/watch_time.h"
#include "../screen/screen.h"
#include "../phone/phone.h"
#include "../message/message.h"


typedef struct watch{
	int iId;
	char cszIp[32];
	watch_mesg_t stWatchMesg;
}watch_t;

int watch_init(watch_t *pstWatch);
int watch_exec(watch_t *pstWatch);

#endif
