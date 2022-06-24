#include<stdio.h>
 typedef unsigned long int ULI;

 ULI factorial(int);

 int main()
 {
     int iNo=0;
     ULI iRet=0;

     printf("enter the number\n");
     scanf("%d",&iNo);

     iRet=factorial(iNo);
     printf("factorial of %d is: %ld\n",iNo,iRet);
        
     return 0;
 }

 ULI factorial(int ivalue)
 {
     register int icnt=1; 
     ULI ifact=1;

     if(ivalue<0) //updator
     {
         ivalue=-ivalue;
     }

     while(ivalue>=icnt)
     {
        ifact=ifact*icnt;
        icnt++;
     }
     return ifact;
 }