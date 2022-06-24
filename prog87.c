#include<stdio.h>
#include<stdbool.h>
bool CheckSmall(char c)
{
    if((c>='a') && (c<='z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
     char ch='\0';
     bool bRet=false;
     printf("enter the character");
     scanf("%c",&ch);

     bRet=CheckSmall(ch);
     if(bRet==true)
     {
         printf("it is small");
     }
     else
     {
         printf("it is not small");
     }
    return 0;
}