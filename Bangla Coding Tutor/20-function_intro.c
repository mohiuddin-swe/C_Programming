/*Function in C

1. Function Name;
2. Input/Arguments/Parameters;
3. Return Data Type;
4. Function Body;

return_data_type func_name (input1,input2,..){

    your calculation;
    do your other stuffs;

    return result;}
    */

#include<stdio.h>

int get_sum(int x, int y){
    int sum=x+y;

    return sum;
}

void say_hi(){
    printf("Hi\n");
}

int main(){ // main function

printf("Main start\n");

say_hi();

int result = get_sum(100,200);

printf("My sum is = %d",result);
return 0;
}



