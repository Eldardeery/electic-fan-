

#ifndef SEVENSEGAPP_H_
#define SEVENSEGAPP_H_
#include "SevenSeg.h"

#define SSD_STARTING_CTRL_BIT 0
#define SSD_DATA_BASE BASE_B
#define SSD_CTRL_BASE BASE_D
//caled in init
void DisplayMuxAppInit();
//called in the loop
void DisplayMuxAppShow();
//called in the loop
void DisplayMuxAppReset();


#endif /* SEVENSEGAPP_H_ */
