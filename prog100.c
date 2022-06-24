#include<stdio.h>
#include<stdbool.h>

bool Pallindrome(char *str)
{
    char *end=str;
    bool flag=true;

  if(str==NULL)
  {
      return ;
  }

  while(*end!='\0')
  {
      end++;
  }
  end--;

 while(str<end)
 {
     if(*str!=*end)
     {
         flag=false;
         break;
     }
     str++;
     end--;
 }
 return flag;
 
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