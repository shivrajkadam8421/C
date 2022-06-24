#include<stdio.h>
#include<stdlib.h>

int Difference(int [],int);

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

    iret=Difference(p,isize);
     printf("Difference between largest and smallest number : %d",iret);

    free(p);
    return 0;
}

int Difference(int arr[],int isize)
{
    int iCnt1=0,ismall=arr[0],iBig=arr[0],idiff=0;
    

     for(iCnt1=0;iCnt1<isize;iCnt1++)
    {
        if(arr[iCnt1]<ismall)
        {
            ismall=arr[iCnt1];
        }
       
       if(arr[iCnt1]>iBig)
        {
            iBig=arr[iCnt1];
        }
    }
   idiff=iBig-ismall;
    return idiff;
}