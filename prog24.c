//input:12
//output:1 2 3 4 6 


#include<stdio.h>
 
 void factors(int);

 int main()
 {
     int iNo=0;
     
     printf("enter the number\n");
     scanf("%d",&iNo);

     factors(iNo);
        
     return 0;
 }

 void factors(int ivalue)
 {
      int icnt=0;
      if(ivalue<0)
      {
          ivalue=-ivalue;
      } 
    
    for(icnt=1;icnt<ivalue;icnt++)
    {
        if((ivalue%icnt)==0)
        {
            printf("%d\n",icnt);
        }
    }
      
 }