//input:50
//output:52464316

#include<stdio.h>


  unsigned long int factorial(int); //declaration

 int main()
 {
      int iNo;
     unsigned long int iRet;

     printf("enter the number\n");
     scanf("%d",&iNo);

    iRet= factorial(iNo); //funtion call
      printf("factorial is:%ld\n",iRet);

     return 0;
 }
 unsigned long int factorial(int ivalue)  //defination
{
     int icnt=0;
    unsigned long int ifact=1;
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