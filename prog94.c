#include<stdio.h>
int Count(char *c)
{
   int icnt1=0;
    while(*c!='\0')
    {
    if(*c==' ')
    {
        icnt1++;
    }
    c++;
    }
  return icnt1;
}

int main()
{
     char str[50];
     int iRet=0;
     printf("enter the string\t");
     scanf("%[^\n]s",str);
    
     iRet =Count(str);
     printf("the count of spaces \t%d",iRet);
    return 0;
}