#include<stdio.h>
#include<stdbool.h> //for bool datatype

 bool CheckEven(int);

 int main()
 {
     int iNo=0;
     bool bRet=false;

     printf("enter the number\n");
     scanf("%d",&iNo);

     bRet=CheckEven(iNo);
        if(bRet==true)
        {
            printf("\n\t%d number is even",iNo);
        }
        else
        {
            printf("\n\t%d number is not even",iNo);
        }
     return 0;
 }

 bool CheckEven(int ivalue)
 {
     if((ivalue%2)==0)
     {
         return true;
     }
     else
     {
         return false;
     }
 }