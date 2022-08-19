#include<stdio.h>
int main(){

    int b[5];
    
    printf("Enter 5 numbers\n");
     for (int i=0; i<5;i++)
    {
        scanf("%d",&b[i]);
    }

    printf("Your inserted number is\n\n\n");
    for (int i=0; i<5;i++)
    {
        printf("%d\n",b[i]);
    }

    printf("\n\n\n\t");    
    

    int a[3];
    a[0]=3;
    a[1]=4;
    a[2]=300;

    int x = a[0] + a[2];
    printf("\n%d\n",x);

    a[2]=100;
    x=a[0]+a[2];
    printf("%d\n",x);

    return 0;

}