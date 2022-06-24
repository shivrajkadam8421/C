#include<stdio.h>

 void display(int); //declaration

 int main()
 {
     int iNo;
     printf("enter the number\n");
     scanf("%d",&iNo);
     display(iNo); //funtion call

     return 0;
 }

 void display(int ivalue)  //defination
{
    int i=0;
    if(ivalue==0)
    {
        printf("entered 0\n");
        return ;
    }
    if(ivalue<0)
    {
        ivalue=-ivalue;
    }
    for(i=ivalue;i>=1;i--)
    {
       printf("\t%d\n",i);
    }
}