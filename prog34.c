

#include<stdio.h>
#include<stdbool.h>

bool ChekPallindrome(int);
int revrse(int);

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

int revrse(int iNo)
{
    int idigit=0,irev=0;
    while(iNo!=0)
    {
        idigit=iNo%10;
        irev=(irev*10)+idigit;
        iNo=iNo/10;
    }
    return irev;
}


bool ChekPallindrome(int iNo)
{
  int itemp=0;

  int inum=revrse(iNo);

  if(inum==iNo)
  {
      return true;
  }
  else
  {
       return false;
  }
}




