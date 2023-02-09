////////////////////////////////////////////////
//
// Check wheather there is zero in input number.
//
////////////////////////////////////////////////

#include"header2.h"

//Entery point function.
int main()
{
  int iValue = 0;
  bool iRet = false ;
  
  printf("Enter the number\n");
  scanf("%d",&iValue);
  
  iRet=ChkZero(iValue);
  
  if(iRet==true)
  {
   printf("Number contains zero\n");
  }
  else 
  {
   printf("Number does not contain zero\n");
  }
  return 0;

}
