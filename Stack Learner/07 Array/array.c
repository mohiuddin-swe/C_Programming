#include<stdio.h>
int main (){
    int my_array[5];
    //[0,0,0,0,0]
    my_array[0]=5;
    my_array[1]=10;
    my_array[2]=15;
    my_array[3]=20;
    my_array[4]=25;
    my_array[5]=30;

    printf("%d\n",my_array[0]);
    printf("%d\n",my_array[1]);
    printf("%d\n",my_array[2]);
    printf("%d\n",my_array[3]);
    printf("%d\n",my_array[4]); 


    return 0;
}