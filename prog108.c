#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool Check21thBit(UINT iNo)
{
  int idigit=0,iMask=0x00100000;

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

   bret=Check21thBit(iValue);

   if(bret==true)
   {
     printf("21th bit is ON\n");
   }
   else{
     printf("21th bit is OFF\n");
   }

   return 0;
 }