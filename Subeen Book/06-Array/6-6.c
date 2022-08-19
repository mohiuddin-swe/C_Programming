#include<stdio.h>
int main () {
    int numbers[5]={10,20,30,40,50};

    numbers[0]=100;
    numbers[2]=200;
    numbers[3]=300;

    printf("first element: %d\n",numbers[0]);
    printf("Third element: %d\n",numbers[2]);

    return 0;
}