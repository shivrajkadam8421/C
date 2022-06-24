/*input:row=5  column=5
  output:     
            *   
            * * 
            * * *   
            * * * *   
            * * * * *  
    
                                 */
                                 //less time complexity

//time comnplexity is less

#include<stdio.h>
void Display(int iRow,int icolumn)
{
     int iCnt1=0,iCnt2=0;

    
   
    for(iCnt1=1; iCnt1<=iRow; iCnt1++)
    {
         for(iCnt2=1; iCnt2<=iCnt1; iCnt2++)
         {
            
           
              printf("*\t");

         }
          printf("\n");
    }
}

int main()
{
 int iValue1=0,iValue2=0;
 printf("Enter the row ");
 scanf("%d",&iValue1);

  printf("Enter the column ");
 scanf("%d",&iValue2);

 if(iValue1!=iValue2)
 {
     printf("wrong input\n");
     return 0;
 }
 Display(iValue1,iValue2);

 return 0;
}