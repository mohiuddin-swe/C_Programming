#include<stdio.h>
int main(){
    int x[2][3]={
        11,12,13,
        21,22,23
    };

    printf("%d\n",x[0][0]);
    int y=x[0][0]+x[1][1];
    printf("value of y: %d\n",y);



return 0;    
}