#include<stdio.h>
int main() {
    int A;
    float B,C,SALARY;
    scanf("%d",&A);
    scanf("%f%f",&B,&C);
    SALARY=B*C;
    printf("NUMBER = %d\n",A);
    printf("SALARY = U$ %.2f\n",SALARY);

    return 0;
}