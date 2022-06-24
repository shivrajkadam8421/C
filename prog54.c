#include<stdio.h>

int main()
{
   int Arr[5];
   int isum=0,iCnt=0;

   printf("enter the elelments");
   for(iCnt=0;iCnt<5;iCnt++)
   {
       scanf("%d",&Arr[iCnt]);
         isum=isum+Arr[iCnt];
      
   }

   printf("Addition is:%d",isum);


   return 0;
}