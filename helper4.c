#include "header4.h"

////////////////////////////////////////////////////////////
//
//
// Function name    :   ChkVowel
// Function Date    :   30 Apr 2022
// Function Author  :   Prasad Yeole
// Parameters       :   INT
// Description      :   Accept number from user and return multiplication of all digits.
// Returns          :   Int
//
//
////////////////////////////////////////////////////////////


int MultDigits(int iNo)
{
 int iDigit= 0;
 int iMult = 1;
 
 while (iNo != 0)
 {
   iDigit = iNo % 10;
    iMult = iDigit * iMult;
   iNo = iNo/10;
  }
  return iMult;
} 
