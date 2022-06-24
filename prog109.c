#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
  int idigit=0,iMask=0x840;

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

   bret=CheckBit(iValue);

   if(bret==true)
   {
     printf("7th and 12th bit is ON\n");
   }
   else{
     printf("7th and 12th bit is OFF\n");
   }

   return 0;
 }