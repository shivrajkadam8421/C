

#include<stdio.h>
#include<stdbool.h>

bool ChekPallindrome(int);


int main()
{
    int ivalue=0;
    bool iret=false;
    
    printf("enter the number\n");
    scanf("%d",&ivalue);

   iret=ChekPallindrome(ivalue);
   
   if(iret==true)
   {
       printf("number is palindrome");
   }
   else
   {
      printf("number is not pallindrome");
   }

}


bool ChekPallindrome(int iNo)
{
    int idigit=0,irev=0;
    int icopy=iNo;
   
    while(iNo!=0)  //cpmplexity is n , where the n is number of digits
  {
        idigit=iNo%10; 
        irev=(irev*10)+idigit; 
        iNo=iNo/10; 
  }
  if(irev==icopy)
  {
      return true;
  }
  else
  {
      return false;
  }
  
}


