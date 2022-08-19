/*%10.4 indicates that the first four characters are to be printed in a field width of 10 columns.
 However, if we include the minus sign in the specification the string will be printed left justified.*/

int main()
{
    char country[15]="united kingdom";
    printf("\n\n");
    printf("1.*1234567891234567*\n");//string
    printf("2.-----\n");
    printf("3.%15s\n",country);
    printf("4.%5s\n",country);
    //When the field width is less than the length of the string, the entire string is printed.
    printf("5.%15.6s\n",country);
    printf("6.%-15.6s\n",country);//The minus sign in the specification causes the string to be printed left justified
    printf("7.%15.0s\n",country);
    printf("8.%.3s\n",country);
    printf("9.%s\n",country);
    printf("10.-----\n");
}
