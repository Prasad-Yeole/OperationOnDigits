
#include "header1.h"

////////////////////////////////////////////////////////////
//
//
// Function name    :   DisplayDigit
// Function Date    :   30 Apr 2022
// Function Author  :   Prasad Yeole
// Parameters       :   INT
// Description      :   Accept number from user and display its digits in reverse.
// Returns          :   NONE
//
//
////////////////////////////////////////////////////////////


void DisplayDigit(int iNo)
{
 int iCnt = 0;
 int iDigit= 0;
 
 if (iNo < 0)
 {
  iNo = -iNo;
 }
 
 while (iNo != 0)
 {
   iDigit = iNo % 10;
   printf("%d\n",iDigit);
   iNo = iNo/10;
  }
  return;
} 
