#include<stdio.h>

int main()
{
    char arr[11]="Marvellous";

    
    printf("%s\n",&arr[0]);
    printf("%s\n",&arr[5]);
    printf("%s\n",&arr[9]);
    printf("%s\n",arr);

    printf("%s\n",arr);
    printf("%s\n",arr+5);
    printf("%s\n",arr+9);

    
    return 0;
}