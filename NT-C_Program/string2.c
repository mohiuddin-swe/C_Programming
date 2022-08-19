//Reading string from terminal.
int main()
{
    char address[30];

    scanf("%s",address);//No use of & sign
                        //scanf drawback-Whitespace
                        //scanf function automatically terminates its input on the first white space it finds.
                        //edit set conversion code %[^\n]
    printf("%s",address);//%ws for reading a specified number of characters



}
