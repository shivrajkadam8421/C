#include<stdio.h>
#include<stdbool.h>

bool Pallindrome(char *str)
{
    char *start=str;
    char *end=str;
    bool flag=true;
  if(str==NULL)
  {
      return -1;
  }

  while(*end!='\0')
  {
      end++;
  }
  end--;
 while(start<end)
 {
     if(*start!=*end)
     {
         flag=false;
         break;
     }
     start++;
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