#include<stdio.h>

typedef unsigned int UINT;
 
UINT strlenX(char *brr);

int main()
{
   char arr[50];
   UINT iRet=0;
   printf("enter string \n");
   scanf("%[^'\n']s",arr);
   // char *ptr=NULL;
   iRet=strlenX(arr);   //strlenX(NULL);   strlenX(ptr);
   printf("length of string is:%d\n",iRet);
    
    return 0;
}

UINT strlenX(char *str)
{
    int icnt=0;
    if(str == NULL)
   {
        return 0;
   }
    while(*str !='\0')
    {
       icnt++;
       str++;
    }
    return icnt;
} 