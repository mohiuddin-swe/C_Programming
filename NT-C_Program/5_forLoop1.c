//WAP to get the summation of numbers in a range.
#include <stdio.h>
int main()
{
    int num, count, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);


    // for loop terminates when num is less than count
    for(count = 1; count <= num; ++count)
    {
        sum = sum+count;//sum=sum+count
    }

    printf("Sum = %d", sum);

    return 0;
}
