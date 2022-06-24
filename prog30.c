#include<stdio.h>

int sumEven(int);


int main()
{
    int ivalue=0,total=0;
    
    printf("enter the number\n");
    scanf("%d",&ivalue);

   total=sumEven(ivalue);
   printf("addition of even digits are:%d\n",total);

}


int sumEven(int iNo)
{
    int idigit=0,isum=0;
   
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)  //cpmplexity is n where the n is number of digits
  {
       idigit=iNo%10; 
       if((idigit%2)==0)
       {
           isum=isum+idigit;
       }
        iNo=iNo/10; 
   
  }
   return isum;
}

