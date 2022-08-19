#include<stdio.h>
int main () {
    int numbers[5]={10,20,30,40,50};

   

    printf("first element: %d\n",numbers[-1]);
    printf("Third element: %d\n",numbers[2]);
    printf("5th element: %d\n",numbers[4]);

    return 0;
}