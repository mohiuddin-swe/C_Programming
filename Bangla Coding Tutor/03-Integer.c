#include<stdio.h>
#include<limits.h>
int main(){

    printf("Size of integer in my computer: %d\n\n",sizeof(int));
    printf("The minimum value of INT = %d\n",INT_MIN);
    printf("The maximum value of INT = %d\n",INT_MAX);
    printf("The minimum value of Long = %ld\n",LONG_MIN);
    printf("The maximum value of Long = %ld\n",LONG_MAX);

    /*int a;
    int b;
    long long int c;

    a=2147483647;
    b=2147489648; //long integer
    c=2147489648;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%lld\n",c);*/

    return 0;

}
