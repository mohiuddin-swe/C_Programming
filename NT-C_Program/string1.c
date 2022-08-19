/*When the compiler assigns a character string to a character array,
it automatically supplies a null character'\0' at the end of the string.
Therefore, the size should be equal to the maximum number of character in the string plus 1*/

//If we take the size 8 for city string, what will happen?
#include<stdio.h>
int main()
{
    char city[9]="New York";
    char city1[]={'N','E','W',' ','Y','O','R','K','\0'};
    //valid without declaring size, initializing an array

    printf("%s\n",city);
    printf("%s\n",city1);
}

//Illegal Cases
//1. char str[3]="GOOD";
/*2.char st[5];
     st="Good";*/

/*char s1[4]="abc";
  char s2[4];
  s1=s2;*/

//An array name can't be used as the left operand of an assignment operator.




