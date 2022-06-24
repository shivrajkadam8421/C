#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT iNo,UINT ibit)
{
  if((ibit<1) && (ibit>32))
  {
    return;
  }
  UINT iMask=1;
  iMask=(iMask<<(ibit-1));

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
   UINT iValue=0,iMask=0;
   bool bret=false;

   printf("enter the number");
   scanf("%d",&iValue);
   printf("enter the mask");
   scanf("%d",&iMask);

   bret=CheckBit(iValue,iMask);

   if(bret==true)
   {
     printf(" bit is ON\n");
   }
   else{
     printf(" bit is OFF\n");
   }

   return 0;
 }