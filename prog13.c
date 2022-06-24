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

 void display(int n)  //defination
{
    int i=0;
    for(i=1;i<=n;i++)
    {
        printf("\t%d\n",i);

    }
    
}