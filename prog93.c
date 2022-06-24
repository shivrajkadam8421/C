#include<stdio.h>
void Count(char *c)
{
   int icnt1=0,icnt2=0;
    while(*c!='\0')
    {
    if((*c>='a') && (*c<='z'))
    {
        icnt1++;
    }
    else if((*c>='A') && (*c<='Z'))
    {
        icnt2++;
    }
    c++;
    }
   printf("count of small character is:%d\n",icnt1);
   printf("count of capital character is:%d\n",icnt2);
}

int main()
{
     char str[50];
     printf("enter the string\t");
     scanf("%[^\n]s",str);
    
     Count(str);
   
    return 0;
}