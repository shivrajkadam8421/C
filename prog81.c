#include<stdio.h>

void Display(char *brr);

int main()
{
    char arr[50];

    printf("enter your name \n");
    scanf("%[^'\n']s",arr);
  
   Display(arr);
 
    
    return 0;
}

void Display(char *brr)
{
    while(*brr!='\0')
    {
      printf("%c\n",*brr);
      brr++;
    }

}