

#include <stdio.h>

/*
//call a function to make string length. 

int string_length(char str[])
{
    int i, length = 0;
    
    for (i = 0; str[i] != '\0'; i++)
    {
        length++;   
    }
    return length;
}
*/

//Another way to call this function

int string_length(char str[])
{
    int i;
    
    for (i = 0; str[i] != '\0'; i++);
    
    return i;
   
}


int main()
{
    char country[100];
    
    int length;
    
    while (1 == scanf("%s", country))
    {
        length = string_length(country); 
        
        printf("length: %d\n", length);       
    
    }

    return 0;
}
