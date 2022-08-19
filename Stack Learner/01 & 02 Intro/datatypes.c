#include <stdio.h>

int main() {
    int num = 45;
    float num2 = 450.45f;
    char ch = 'T';

    printf("%d\n", num);
    printf("%f\n", num2);
    printf("%c\n", ch);

    num = num2;
    printf("%d\n", num);
    return 0;
}

// Number
    // Integer 451, Float 78.586
// Text
    // Character '%' 'a' 'A'
// Boolean
// Custom Type