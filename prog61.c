#include<stdio.h>
#include<stdlib.h>

int EventCount(int [],int);

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

    iret=EventCount(p,isize);
     printf("count of even number is: %d",iret);

    free(p);
    return 0;
}

int EventCount(int arr[],int isize)
{
    int iCnt1=0,icnt2=0;
    

     for(iCnt1=0;iCnt1<isize;iCnt1++)
    {
        if((arr[iCnt1]%2)==0)
        {
            icnt2++;
        }
       
    }
   
    return icnt2;
}