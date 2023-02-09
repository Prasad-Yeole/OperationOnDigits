//////////////////////////////////////////////////////////////
//
// Multiplication of all digits in input.
//
//////////////////////////////////////////////////////////////

#include"header4.h"

//Entery point function.
int main()
{
  int iValue = 0;
  int iRet = 0;
  
  printf("Enter the number\n");
  scanf("%d",&iValue);
  
  iRet = MultDigits(iValue);
  printf("Multiplication of all digits is : %d\n",iRet);
  
  return 0;

}
