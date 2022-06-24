#include<stdio.h>

int countEven(int);


int main()
{
    int ivalue=0,total=0;
    
    printf("enter the number\n");
    scanf("%d",&ivalue);

   total=countEven(ivalue);
   printf("number of even digits are:%d\n",total);

}


int countEven(int iNo)
{
    int idigit=0,icount=0;
    if(iNo==0)
    {
       return 1; 
    }
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)  //cpmplexity is n where the n is number of digits
  {
       idigit=iNo%10; 
       if((idigit%2)==0)
       {
           icount++;
       }
        iNo=iNo/10; 
   
  }
   return icount;
}

