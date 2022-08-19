/*Whenever a character constant or character variable is used in an expression, it is automatically converted
into an integer value by the system.
It is possible to perform arithmatic*/

//x='z'-1 is 121
//We can convert a character digit to its equivalent integer value using the following relationship x=character-'0'

main()
{
    char c;
    printf("\n");
    for(c=65;c<=122;c++)
    {
        if(c>90 && c<97)
        {
            continue;
        }
        printf("|%4d-%c",c,c);
    }
    printf("|\n");

}
