#include<stdio.h>

int separatedigit(int);


int main()
{
    int ivalue=0,total=0;
    
    printf("enter the number\n");
    scanf("%d",&ivalue);

   total=separatedigit(ivalue);
   printf("%d",total);

}


int separatedigit(int iNo)
{
    int idigit=0,sum=0;
    
    while(iNo>0)
  {
     idigit=iNo%10; 
     sum=idigit+sum;
     iNo=iNo/10; 
  }
     return sum;
}

