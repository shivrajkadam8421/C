#include<stdio.h>
#include<stdbool.h>
int CheckSmall(char *c)
{
   int icnt=0;
    while(*c!='\0')
    {
    if((*c>='a') && (*c<='z'))
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
    
     Smallch=CheckSmall(str);
     
     printf("count of small character\t %d",Smallch);
     
    
    return 0;
}