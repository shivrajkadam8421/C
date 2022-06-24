#include<stdio.h>

void Swap(char *p,char *q)
{
    char temp;

    temp=*p;
    *p=*q;
    *q=temp;
}

int main()
{
  char ch1,ch2;

  printf("enter the first chracter");
  scanf("%c",&ch1);

  printf("enter the Second chracter");
  scanf(" %c",&ch2);
  
  printf("before swapping charcter are %c and %c\n",ch1,ch2);
  Swap(&ch1,&ch2);
  printf("after swapping charcter are %c and %c\n",ch1,ch2);

  return 0;

}