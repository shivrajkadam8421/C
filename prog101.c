#include<stdio.h>
#include<stdbool.h>

void StrrevX(char *start)
{
    char *end=start;
    char temp='\0';

  if(start==NULL)
  {
      printf("no input");
  }
  while(*end!=0)
  {
    end++;
  }
  end--;

  while (start<end)
  {
    temp=*start;
    *start=*end;
    *end=temp;

    start++;
    end--;
  }

}

int main()
{
    char arr[20];
    char cValue='\0';
    bool bret=0;

    printf("enter the string\t");
    scanf("%[^'\n']s",arr);

    StrrevX(arr);
    printf("%s\n",arr);

    return 0;
}