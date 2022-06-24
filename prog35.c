#include<stdio.h>
#include<stdbool.h>

bool ChekPerfect(int);
int SumFactors(int);

int main()
{
    int ivalue=0;
    bool iret=false;
    
    printf("enter the number\n");
    scanf("%d",&ivalue);

   iret=ChekPerfect(ivalue);
   
   if(iret==true)
   {
       printf("number is perfect");
   }
   else
   {
      printf("number is not perfect");
   }

}

bool ChekPerfect(int iNo)
{
  int itemp=0;
  itemp=SumFactors(iNo);

  if(itemp==iNo)
  {
      return true;
  }
  else
  {
      return false;
  }

}

int SumFactors(int iNo)
{
     int icnt=0,isum=0;
  
   for(icnt=1;icnt<=(iNo/2);icnt++)
  {
      if((iNo%icnt)==0)
      {
        isum=isum+icnt;
      }
  }
  return isum;
}