#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT iNo,UINT ibit1,UINT ibit2)
{
  if((ibit1<1) && (ibit1>32) && (ibit2<1) && (ibit2>32))
  {
    return;
  }
  UINT iMask1=1,iMask2=1,iResult=0;;
  iMask1=(iMask1<<(ibit1-1));
  iMask2=(iMask2<<(ibit2-1));
  iResult=(iMask1 | iMask2);
  

  if((iNo & iResult)==iResult)
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
   UINT iValue=0,ipos1=0,ipos2=0;
   bool bret=false;

   printf("enter the number\n");
   scanf("%d",&iValue);
   printf("enter the first position\n");
   scanf("%d",&ipos1);
      printf("enter the Second  position\n");
   scanf("%d",&ipos2);

   bret=CheckBit(iValue,ipos1,ipos2);

   if(bret==true)
   {
     printf(" bit is ON\n");
   }
   else{
     printf(" bit is OFF\n");
   }

   return 0;
 }