#include<stdio.h>
#include<stdlib.h>


int LastOccur(int [],int,int);

int main()
{
    int isize=0,iCnt1=0,ivalue=0;
    int iret=0;
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
       
         printf("enter elemnst to LastOccur\n ");
    scanf("%d",&ivalue);

    iret=LastOccur(p,isize,ivalue);
    if(iret>=0)
    {
        printf("number is last occur at %d",iret);
    }
    else
    {
         printf("number is not  present");
    }
    
    free(p);
    return 0;
}

int LastOccur(int arr[],int isize,int ivalue)
{
    int iCnt1=0,icnt2=0,iret=0;
   
   for(iCnt1=(isize-1);iCnt1>=0;iCnt1--)
    {
       if(arr[iCnt1]==ivalue)
       {
          break;           
       }
    }

    if(iCnt1==-1)
    {
        return -1;
    }
    else{
        return iCnt1;
    }
}