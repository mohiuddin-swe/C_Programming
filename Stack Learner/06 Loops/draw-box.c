#include<stdio.h>
int main(){
    int width,height,i,j;
    printf("Enter width & height ex:(5 6)\n");
    scanf("%d %d",& width,&height);
    for(i=0;i<height;i++){
        for(j=0;j<width;j++){
            printf("* ");
        }
        printf("\n");
    }
    
    

    return 0;
}