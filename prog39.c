//input  4
//output 1 * 2 * 3 * 4 * 



#include<stdio.h>

void Display(int);

int main()
{
    int ivalue=0;

    printf("enter the number");
    scanf("%d",&ivalue);

    Display(ivalue);

   return 0;
}

void Display(int iNo)
{
    int icnt=0;

    for(icnt=1;icnt<=iNo;icnt++)
    {
        printf("%d * \t",icnt);
    }
}