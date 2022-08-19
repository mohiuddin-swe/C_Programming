#include<stdio.h>
int main () {
    int arr[4]={5,10,15,20};

    arr[0]=100;
    arr[2]=200;
    arr[3]=300;

    printf("%d, %d, %d, %d\n", arr[0],arr[1],arr[2],arr[3]);

    return 0;
}