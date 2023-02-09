#include "header5.h"

////////////////////////////////////////////////////////////
//
//
// Function name    :   ChkVowel
// Function Date    :   30 Apr 2022
// Function Author  :   Prasad Yeole
// Parameters       :   INT
// Description      :   Accept number from user and return difference between summation of even digits and summation of odd digits.
// Returns          :   Int
//
//
////////////////////////////////////////////////////////////

int CountDiff(int iNo)
{
 int iCnt = 0;
 int iDigit= 0;
 int iSumEven = 0;
 int iSumOdd = 0;
 int iDiff = 0;
 while (iNo != 0)
 {
   iDigit = iNo % 10;
   if ((iDigit % 2)==0)
   {     
     iSumEven = iSumEven + iDigit;
      
     }
     else
     {
      iSumOdd = iSumOdd + iDigit;
     
     }
   iNo = iNo/10;
  }
  iDiff = iSumEven - iSumOdd;
  return iDiff;
} 
