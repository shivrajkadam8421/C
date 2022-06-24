#include<stdio.h>

int main()
{
   int isize=0;
   int isum=0,iCnt=0;
     printf("how many elements");
      scanf("%d",&isize);

   int Arr[isize];
   


   printf("enter the elelments");
   for(iCnt=0;iCnt<isize;iCnt++)
   {
       scanf("%d",&Arr[iCnt]);
         isum=isum+Arr[iCnt];
      
   }

   printf("Addition is:%d",isum);


   return 0;
}