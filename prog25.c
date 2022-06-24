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
      int isum1=0,isum2=0,isum=0;
      int icnt1=0;
      int icnt2=0;
      if(ivalue<0)
      {
          ivalue=-ivalue;
      } 
    
    for(icnt1=1,icnt2=(ivalue/2);(icnt1<=ivalue/4) && (ivalue/4)<icnt2 ;icnt1++,icnt2--)
    {
       
        
         if((ivalue%icnt2)==0)
           {
             isum=isum+icnt2;
             //  printf("%d\n",icnt2);
        
            }
        
        if((ivalue%icnt1)==0) 
        {
            isum=isum+icnt1;
           // printf("%d\n",icnt1);
           
           
        }
      
        
        
    }
     printf("%d\n",isum);
      
 }