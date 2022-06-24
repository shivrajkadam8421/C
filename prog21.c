//input:50
//output:52464316

//typedef 1000gram 1kg
#include<stdio.h>
 typedef unsigned long int UL;

  UL factorial(int); //declaration

 int main()
 {
      int iNo;
     UL iRet;

     printf("enter the number\n");
     scanf("%d",&iNo);

    iRet= factorial(iNo); //funtion call
      printf("factorial is:%ld\n",iRet);

     return 0;
 }
 UL factorial(int ivalue)  //defination
{
     int icnt=0;
    UL ifact=1;
    if(ivalue<0) //updator
    {
        ivalue=-ivalue;
    }
    for(icnt=1;icnt<=ivalue;icnt++)
    {
        ifact=ifact*icnt;
    }
    return ifact;  //return isum
}