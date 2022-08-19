#include<stdio.h>
int main(){
    printf("Pointer in C: Introduction\n");

    int x= 'y';
    int *p;

    p= &x;
    printf("Value of x: %c\n",x);
    printf("Value of x: %c\n",*p);

    return 0;
    
}