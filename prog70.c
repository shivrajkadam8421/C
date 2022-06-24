#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int [],int,int);

int main()
{
    int isize=0,iCnt1=0,ivalue=0;
    bool iret=false;
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

      printf("enter elemnst to search\n ");
    scanf("%d",&ivalue);


    iret=Search(p,isize,ivalue);
    if(iret==true)
    {
        printf("number is present");
    }
    else
    {
         printf("number is not  present");
    }
    
    free(p);
    return 0;
}

bool Search(int arr[],int isize,int ivalue)
{
    int iCnt1=0;
   
     for(iCnt1=0;iCnt1<isize;iCnt1++)
    {
       if(arr[iCnt1]==ivalue)
       {
           break;           
       }
    }

    if(iCnt1==isize)
    {
        return false;
    }
    else
    {
        return true;
    }
   
/*

   if(iCnt1<isize)
   {
       return true;
   }
   else
   {
       return false
   }

  */
  
}