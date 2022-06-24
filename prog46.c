/*input:row=3  column=3
  output:    1 2 3 
             1 2 3
             1 2 3
    
                                 */
         

#include<stdio.h>
void Display(int iRow,int icolumn)
{
     int iCnt1=0,iCnt2=0;
   
    for(iCnt1=1; iCnt1<=iRow; iCnt1++)
    {
         for(iCnt2=1; iCnt2<=icolumn; iCnt2++)
         {
             printf("%d\t",icnt2);
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

 Display(iValue1,iValue2);

 return 0;
}