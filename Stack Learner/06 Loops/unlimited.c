#include<stdio.h>
int main() {
    int a,b;
    char ch='c';

    while(ch!= 'q'){
        printf("Enter two numbers\n");
        scanf("%d%d",&a,&b);
        printf("Result = %d\n",a+b);
        printf("Type c to run again & type q to stop program\n");
        scanf(" %c",&ch);                               
    }

    return 0;
}