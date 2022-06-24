#include<stdio.h>
#include<stdbool.h>

int power(int,int);

int main()
{
    int ivalue1=0,ivalue2=0;
    int iret=0;
    
    printf("enter the coefficient\n");
    scanf("%d",&ivalue1);

     printf("enter the exponent\n");
    scanf("%d",&ivalue2);
   
    iret=power(ivalue1,ivalue2);
    printf("result is :%d",iret);
   
     
     return 0;
}


int power(int ivalue1,int ivalue2)
{
    int icnt=0;
    int ipow=1;

    if(ivalue1<0)
    {
        ivalue1=-ivalue1;
    }
    if(ivalue2<0)
    {
        ivalue2=-ivalue2;
    }


    for(icnt=1;icnt<=ivalue2;icnt++)   //copmplexity is "n" where "n" is exponent(ivalue2)  
    {
       ipow=ivalue1*ipow;
    }
   return ipow;
}


