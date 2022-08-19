#include<stdio.h>
int main() {
    //problem 01: 
    int a[10],i,sum=0;
    printf("Enter 10 numbers\n");

    for (i = 0; i <= 9; i++)
    {
        scanf("%d",&a[i]);
    }

     for (i = 0; i <= 9; i++)
    {
        sum=sum+a[i];
    }

    printf("Sum of the Array:%d\n",sum);
    
}