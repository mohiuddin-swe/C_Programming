#include <stdio.h>
int main() {
    int number=12;
    //printf("Enter an integer: ");
    //scanf("%d", &number);

    // True if the remainder is 0
    if  (number%2 == 0) {
        printf("%d is an even integer.\n",number);
    }
    else {
        printf("%d is an odd integer.\n",number);
    }

    return 0;
}
