/*Problem:02  find the biggest integer and print
the integer values*/

#include<stdio.h>
int main(){
    int a[7]={-99,45,100,37,89,-327,245};
    int max = a[0],i;

    for(i=1; i<7;i++){

        if(a[i]>max)
        max = a[i];
    }

    printf("Max value is: %d\n\n",max);


    return 0;

}