#include "main.h"
uint32_t time0 = 0;
uint32_t time1 = 0;
uint8_t Scan_Key()
{
  time0 = HAL_GetTick();//获取当前时刻
  if (time0 - time1 > 20)
  {

  }

}
