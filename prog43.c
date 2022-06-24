//input:6
//output:a b c d e f




#include<stdio.h>
void Display(int iNo)
{
     char ch='a';
    int iCnt=0;
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
      
        printf("%c\t",ch);
          ch++;
       
    }
}

int main()
{
 int iValue=0;
 printf("Enter the number");
 scanf("%d",&iValue);
 Display(iValue);

 return 0;
}