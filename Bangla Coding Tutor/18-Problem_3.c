#include<stdio.h>
int main(){

    int A[5],B[5],AB[5],i;
    printf("Enter elements of A\n");
    for(i=0;i<5;i++){
        scanf("%d",&A[i]);
    }

    printf("Enter elements of B\n");

    for(i=0;i<5;i++){
        scanf("%d",&B[i]);
    }

    for(i=0;i<5;i++){
        AB[i]=A[i]+B[i];
    }

    printf("Value of AB array:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d\n",AB[i]);
    }
    

return 0;
}