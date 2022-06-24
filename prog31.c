#include<stdio.h>

int reversedigit(int);


int main()
{
    int ivalue=0,iret=0;
    
    printf("enter the number\n");
    scanf("%d",&ivalue);

   iret=reversedigit(ivalue);
   printf("reverse number is:%d\n",iret);

}


int reversedigit(int iNo)
{
    int idigit=0,irev=0;
   
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)  //cpmplexity is n , where the n is number of digits
  {
       idigit=iNo%10; 
        irev=(irev*10)+idigit;
        iNo=iNo/10; 

   
  }
   return irev;
}


