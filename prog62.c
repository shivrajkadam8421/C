#include<stdio.h>
#include<stdlib.h>

int SumOdd(int [],int);

int main()
{
    int isize=0,iCnt1=0,iret=0;
    int *p=NULL;

    printf("how many elemnst\n ");
    scanf("%d",&isize);

    p=(int *)malloc(sizeof(int)*isize);

    printf("enter the elements\n");
    for(iCnt1=0;iCnt1<isize;iCnt1++)
    {
        printf("enter the %d element\t",iCnt1);
        scanf("%d",&p[iCnt1]);
    }

    iret=SumOdd(p,isize);
     printf("sum of odd number is: %d",iret);

    free(p);
    return 0;
}

int SumOdd(int arr[],int isize)
{
    int iCnt1=0,isum=0;
    

     for(iCnt1=0;iCnt1<isize;iCnt1++)
    {
        if((arr[iCnt1]%2)!=0)
        {
            isum=isum+arr[iCnt1];
        }
       
    }
   
    return isum;
}