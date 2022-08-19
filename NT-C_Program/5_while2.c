//WAP to find out the EVEN numbers in the range of 1-100.
#include<stdio.h>

int main()
{
    int i = 1;

    // keep looping while i < 100
    while(i <= 100)
    {
        // if i is even
        if(i % 2 == 0)
        {
            printf("%d ", i);
        }
        i++; // increment i by 1
    }

    // signal to operating system everything works fine
    return 0;
}
