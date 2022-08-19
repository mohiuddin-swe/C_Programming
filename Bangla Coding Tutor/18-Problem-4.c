#include<stdio.h>
int main(){
    int a[5],even_sum=0,odd_sum=0,i;
    printf("Enter 5 numbers\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Values of Array\n\n\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);

        if(a[i]%2==0)
        even_sum=even_sum+a[i];

        else 
        odd_sum=odd_sum+a[i];

    }

    printf("Sum of odd values: %d\n",odd_sum);
    printf("Sum of even numbers: %d\n",even_sum);
    
    
    return 0;


}
