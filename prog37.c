#include<stdio.h>
#include<stdbool.h>

void Display(int);

int main()
{
    int ivalue=0;
    bool iret=false;
    
    printf("enter the number\n");
    scanf("%d",&ivalue);
   
     Display(ivalue);
     return 0;
}


void Display(int ivalue)
{
      int icnt=0;

  if(ivalue==0)
  {
      return ;
  }
    for(icnt=1;icnt<=10;icnt++)
    {
      
        printf("%d\n",(icnt*ivalue));
    }
}

