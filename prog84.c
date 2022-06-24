#include<stdio.h>

void DisplayTable()
{
   int i=0;
   printf("ASCII tanle is \n");
   printf("************************************************\n");
printf("decimal character\n");
 printf("************************************************\n");
   for(i=0;i<=127;i++)
   {
       printf("%d\t%c\n",i,i);
   }
    printf("************************************************\n");
}


int main()
{
     DisplayTable();
    return 0;
}