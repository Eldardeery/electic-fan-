
#ifndef APP_H_
#define APP_H_

#define F_CPU 8000000UL
#include "LcdApp.h"
#include "MotorSwingApp.h"
#include "SpeedApp.h"
#include "TimerApp.h"
#include "SevenSegApp.h"
#include "BuzzApp.h"

void SysTimerCallback();

void systemInit();



#endif /* APP_H_ */
