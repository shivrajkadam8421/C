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
            printf("the number is odd");

   for(i=1;i<=ivalue;i++)
   {
       if((i%2)!=0)
       {
                printf("%d\n",i);
       }
       
   }
    //int i=0;
   /* if(ivalue==0)
    {
        printf("entered 0\n");
        return ;
    }
    if(ivalue<0)
    {
        ivalue=-ivalue;
    }
    for(i=0;i<=ivalue;i=i+2)
    {
       printf("%d",i)
    }
    */
}