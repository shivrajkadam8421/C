#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
  int idigit=0,iMask=0xF;

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
     printf("first four bit is ON\n");
   }
   else{
     printf("first four bit is OFF\n");
   }

   return 0;
 }