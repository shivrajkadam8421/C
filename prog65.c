#include<stdio.h>
#include<stdlib.h>

int BigNum(int [],int);

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

    iret=BigNum(p,isize);
     printf("largest number : %d",iret);

    free(p);
    return 0;
}

int BigNum(int arr[],int isize)
{
    int iCnt1=0,ilarge=arr[0];
    

     for(iCnt1=0;iCnt1<isize;iCnt1++)
    {
        if(arr[iCnt1]>ilarge)
        {
            ilarge=arr[iCnt1];
        }
       
    }
   
    return ilarge;
}