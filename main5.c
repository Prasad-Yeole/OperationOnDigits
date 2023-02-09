//////////////////////////////////////////////////////////////
//
// Display difference in odd and even digits of input number.
//
//////////////////////////////////////////////////////////////

#include"header5.h"

//Entery point function.
int main()
{
  int iValue = 0;
  int iRet = 0;
  
  printf("Enter the number\n");
  scanf("%d",&iValue);
  
  iRet = CountDiff(iValue);
  printf("Difference Between  all even and odd digits is : %d\n",iRet);
  
  return 0;

}
