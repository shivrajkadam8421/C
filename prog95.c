#include<stdio.h>


int CntVowels(char *str)
{
    int icnt=0;
  if(str==NULL)
  {
      return -1;
  }

  while(*str!='\0')
  {
      if(*str=='a' || *str=='e' || *str=='i' || *str=='o' || *str=='u' || 
           *str=='A' || *str=='E' || *str=='I' || *str=='O' || *str=='U')
           {
                   icnt++;
           }
           str++;
  
  }

  return icnt;
}

int main()
{
    char arr[20];
    int iret=0;

    printf("enter the string\t");
    scanf("%[^'\n']s",arr);

    iret=CntVowels(arr);

    if(iret>0)
    {
       printf("number of vowels : \t%d\n",iret);
    }
    else if(iret==-1)
    {
        printf("no string enter");
    }
    else
    {
        printf("no vowles are found");
    }

    return 0;
}