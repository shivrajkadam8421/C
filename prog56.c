#include<stdio.h>


 int Addition(int Brr[]);


int main()
{
   int iret=0;
   int iCnt=0;
   int Arr[5];


   printf("enter the elelments");
   for(iCnt=0;iCnt<5;iCnt++)
   {
       scanf("%d",&Arr[iCnt]);
      
   }

   iret=Addition(Arr);
   printf("Addition is:%d",iret);


   return 0;
}

int Addition(int Brr[])
{
    int isum=0,iCnt=0;
     for(iCnt=0;iCnt<5;iCnt++)
   {
         isum=isum+Brr[iCnt];
      
   }

    return isum;
}