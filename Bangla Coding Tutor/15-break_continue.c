#include<stdio.h>
int main() {

    int i;
    for (i=1; i<=3; i++)
    {
        printf("Let me go\n");
        if(i==2)
        break;
        printf("*\n");
        printf("* *\n");

    }

    printf("break ended\n\n\n\n");
    printf("Continue started\n");

    for (i=1; i<=3; i++)
    {
        printf("Let me go\n");
        if(i==2)
        continue;
        printf("*\n");
        printf("* *\n");
        
    }


    return 0;

}