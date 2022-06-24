#include<stdio.h>
#include<stdbool.h>
char Convert(char c)
{
    if((c>='a') && (c<='z'))
    {
        return c-32;
    }
    else if((c>='A') && (c<='Z'))
    {
        return c+32;
    }
   
}

int main()
{
     char ch='\0',cRet='\0';
     printf("enter the character\t");
     scanf("%c",&ch);

     cRet=Convert(ch);
     
         printf("%c",cRet);
     
    
    return 0;
}