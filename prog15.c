#include<stdio.h>

//input:5
//output:5 4 3 2 1 

 void display(); //declaration

 int main()
 {
    
     display(); //funtion call

     return 0;
 }

 void display()  //defination
{
    
    int i=0;
  
    //start:5
    //end:1
    //displacement:-1

    for(i=5;i>0;i--)
    {
       printf("%d\n",i);
    }
    
}