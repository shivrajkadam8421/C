//input:5
//output:120

#include<stdio.h>


 int factorial(int); //declaration

 int main()
 {
     int iNo;
     int iRet;

     printf("enter the number\n");
     scanf("%d",&iNo);

    iRet= factorial(iNo); //funtion call
      printf("factorial is:%d\n",iRet);

     return 0;
 }
 int factorial( int ivalue)  //defination
{
     int icnt=0;
     int ifact=1;
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