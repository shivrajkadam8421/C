#include<stdio.h>

void DisplayBinary(int iNo)
{
    int idigit=0;
   while(iNo!=0)
   {
       idigit=iNo%2;
       printf("%d\t",idigit);
       iNo=iNo/2;
   }
}

int main()
{
   int ivalue=0;
     
     printf("enter the number");
     scanf("%d",&ivalue);

     DisplayBinary(ivalue);
    return 0;
}