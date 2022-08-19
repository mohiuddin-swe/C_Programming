#include <stdio.h>
#include <stdbool.h>

int main () {

    bool is_logged_in =true;

    if (is_logged_in) {
        printf("\n \nUser logged in\n");
    }
    else {
        printf("User logged out\n");
    }

    return 0;
}