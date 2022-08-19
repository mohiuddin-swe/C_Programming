#include<stdio.h>
int main () {
    int my_array[30];

    my_array[0]=5;
    my_array[1]=10;
    my_array[2]=15;
    my_array[3]=20;
    my_array[4]=25;
    my_array[5]=30;

    for (int i=0; i <=4; i++)
    {
        printf("%d\n",my_array[i]);
    }
    
}