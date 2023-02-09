#include "header2.h"

////////////////////////////////////////////////////////////
//
//
// Function name    :   Print
// Function Date    :   30 Apr 2022
// Function Author  :   Prasad Yeole
// Parameters       :   Int
// Description      :   Accept the number from user and check wheather it contains 0 in it or not.
// Returns          :   Int
//
//
////////////////////////////////////////////////////////////


bool ChkZero(int iNo)
{
 int iCnt = 0;
 int iDigit= 0;
 
 if (iNo < 0)
 {
  iNo = -iNo;
 }
 
 if (iNo==0)
 {
  return 1;
 }
 
 while (iNo != 0)
 {
   iDigit = iNo % 10;
   if (iDigit==0)
   {
     return 1;
   }
   iNo = iNo/10;
  }
  return 0;
} 
