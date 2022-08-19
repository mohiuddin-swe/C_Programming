#include<stdio.h>
int main() {
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);

    printf("Your value: %d\n",a);

    float x,y;
    printf("Enter value for x and y:\n");
    scanf("%f%f", &x,&y);

    printf("You entered: %f and %f\n",x,y);

    return 0;

    
}