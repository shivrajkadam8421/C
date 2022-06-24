#include<stdio.h>

int CntFrequency(char *str,char ch)
{
    int icnt=0;
  if(str==NULL)
  {
      return -1;
  }

  while(*str!='\0')
  {
     if(*str==ch)
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
    char cValue='\0';
    int iret=0;

    printf("enter the string\t");
    scanf("%[^'\n']s",arr);


    printf("enter the charcter\t");
    scanf(" %c",&cValue);

    iret=CntFrequency(arr,cValue);

    if(iret>0)
    {
       printf("frequency of %c is : \t%d\n",cValue,iret);
    }
    else if(iret==-1)
    {
        printf("no string enter");
    }
    else
    {
        printf("no %c found",cValue);
    }

    return 0;
}