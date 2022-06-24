#include<stdio.h>

 int Addition(int); //declaration

 int main()
 {
     int iNo;
     int iRet;

     printf("enter the number\n");
     scanf("%d",&iNo);

    iRet= Addition(iNo); //funtion call
      printf("Addition of number is:%d\n",iRet);

     return 0;
 }

 int Addition(int ivalue)  //defination
{
    int icnt=0,isum=0;
    if(ivalue<0) //updator
    {
        ivalue=-ivalue;
    }
    for(icnt=1;icnt<=ivalue;icnt++)
    {
        isum=isum+icnt;
    }
    return isum;  //return isum
}