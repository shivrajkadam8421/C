#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool Check4thBit(UINT iNo)
{
  int idigit=0,iMask=0x00000008;

  if((iNo & iMask)==iMask)
  {
    return true;
  }
  else
  {
    return false;
  }
  
}

 int main()
 {
   UINT iValue=0;
   bool bret=false;

   printf("enter the number");
   scanf("%d",&iValue);

   bret=Check4thBit;
   if(bret==true)
   {
     printf("4th bit is ON\n");
   }
   else{
     printf("4th bit is OFF\n");
   }

   return 0;
 }