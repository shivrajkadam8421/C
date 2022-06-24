#include<stdio.h>
#include<stdlib.h>

float Average(int [],int);

int main()
{
    int isize=0,iCnt1=0;
    float iret=0.0f;
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

    iret=Average(p,isize);
     printf("average is: %f",iret);

    free(p);
    return 0;
}

float Average(int arr[],int isize)
{
    int iCnt1=0,isum=0;
    float favg=0.0f;
    

     for(iCnt1=0;iCnt1<isize;iCnt1++)
    {
        isum=isum+arr[iCnt1];
       
    }
    favg=((float)isum/(float)isize);  //explicit typecasting
    return favg;
}