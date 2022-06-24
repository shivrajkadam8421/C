#include<stdio.h>
#include<stdbool.h>
int CheckCapital(char *c)
{
   int icnt=0;
    while(*c!='\0')
    {
    if((*c>='A') && (*c<='Z'))
    {
        icnt++;
    }
    c++;
    }
    return icnt;
   
}

int main()
{
     char str[50];
      int Smallch=0;
     printf("enter the string\t");
     scanf("%[^\n]s",str);
    
     Smallch=CheckCapital(str);
     
     printf("count of capital character\t %d",Smallch);
     
    
    return 0;
}