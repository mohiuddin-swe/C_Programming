// Program to display a number if it is negative

#include <stdio.h>
int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // true if number is less than 0
    if (number < 0) {
        printf("The number %d is negative\n", number);
    }

    printf("OK..DONE");

    return 0;
}
