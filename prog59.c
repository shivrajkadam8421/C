

 #include<stdio.h>
 #include<stdlib.h>

 int Addition(int* Brr,int);

int main()
{
     int *Arr=NULL;
     int isize=0,iret=0,iCnt=0;

     printf("how many elements");
      scanf("%d",&isize);

      Arr=(int*)malloc(isize*sizeof(int));
   
     printf("enter the elelments");
     for(iCnt=0;iCnt<isize;iCnt++)
     {
       scanf("%d",(Arr+iCnt));  //&Arr[iCnt]
        
     }

     iret=Addition(Arr,isize);
     printf("Addition is:%d",iret);
     
     free(Arr);
     return 0;
}


//int Addition(int *Brr=Arr,int isize=isize)
int Addition(int* Brr,int isize) //Brr is the pointer which points to the Arr
{
    int isum=0,iCnt=0;
     for(iCnt=0;iCnt<isize;iCnt++)
   {
         isum=isum+(*Brr);//*(Brr+1)  or Brr[iCnt]
           Brr++;    //brr=brr+1
      
   }

    return isum;
}