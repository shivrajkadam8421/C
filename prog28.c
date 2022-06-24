#include<stdio.h>

int countdigit(int);


int main()
{
    int ivalue=0,total=0;
    
    printf("enter the number\n");
    scanf("%d",&ivalue);

   total=countdigit(ivalue);
   printf("%d",total);

}


int countdigit(int iNo)
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
    while(iNo>0)
  {
       idigit=iNo%10; 
        icount++;
        iNo=iNo/10; 
   
  }
   return icount;
}

