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

int SumFactors(int ivalue)
{
    int icnt1=0,icnt2=0,isum=0;
      int itemp=6;
      if(ivalue<0)
      {
          ivalue=-ivalue;
      } 
       if(ivalue==6)
      {
          return itemp;
      } 
    
      for(icnt1=1,icnt2=(ivalue/2);(icnt1<=ivalue/4) && (ivalue/4)<icnt2 ;icnt1++,icnt2--)
    { 
         if((ivalue%icnt2)==0)
           {
             isum=isum+icnt2;
             //  printf("%d\n",icnt2);
        
            }
        
          if((ivalue%icnt1)==0) 
          {
             isum=isum+icnt1;
             // printf("%d\n",icnt1);
           
           
           } 
    }
     return isum;
      
 
        
        
    
      
}