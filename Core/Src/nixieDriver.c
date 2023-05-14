/*
 * nixieDriver.c
 *
 *  Created on: 14 apr 2023
 *      Author: noroc
 */

#include "nixieDriver.h"
#include "stdint.h"

uint8_t *returnArrayData(uint8_t displayDigit)
{
  static uint8_t nixeDecimalData[4];
  uint8_t numberDisplayed, myBites;
  myBites = 22;
  numberDisplayed = 0;
  numberDisplayed = displayDigit;
  uint32_t data = 0x00000000;
  /*nothing*/

  //data = 1 << (numberDisplayed + myBites);
  data = 1 << ( numberDisplayed + myBites);
  nixeDecimalData[0] = data >> 24;
  nixeDecimalData[1] = data >> 16;
  nixeDecimalData[2] = data >> 8;
  nixeDecimalData[3] = (uint8_t)data;

  return nixeDecimalData;
}

/*
 *
 * 0000 0000 00|00 0000 0000 | 0000 0000 00|00
 * 9876 5432 10
 *
 *
 *
 *
 * */
