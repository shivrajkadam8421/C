#include<stdio.h>
#include<stdbool.h>

bool Pallindrome(char *str)
{
    char *ptr=((&(*str))+4);
    printf("%c\n",*ptr);
  if(str==NULL)
  {
      return -1;
  }

  while(*str!='\0')
  {
        if(*ptr!=*str)
      {
           break;;
      }
    str++;
    ptr--;
  }
  if(str>ptr)
  {
      return false;
  }
  else
  {
      return true;
  }
}

int main()
{
    char arr[20];
    char cValue='\0';
    bool bret=0;

    printf("enter the string\t");
    scanf("%[^'\n']s",arr);

    bret=Pallindrome(arr);
    if(bret==true)
    {
        printf("string is pallindrome");
    }
    else{
        printf("string is not pallindrome");
    }

    

    return 0;
}