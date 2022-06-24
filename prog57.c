#include<stdio.h>


 int Addition(int Brr[],int);


int main()
{
   int isize=0,iret=0,iCnt=0;

     printf("how many elements");
      scanf("%d",&isize);

    int Arr[isize];
   
    printf("enter the elelments");
    for(iCnt=0;iCnt<isize;iCnt++)
     {
       scanf("%d",&Arr[iCnt]);
      
     }

    iret=Addition(Arr,isize);
     printf("Addition is:%d",iret);

   return 0;
}

int Addition(int Brr[],int isize)
{
    int isum=0,iCnt=0;
     for(iCnt=0;iCnt<isize;iCnt++)
   {
         isum=isum+Brr[iCnt]);
      
   }

    return isum;
}