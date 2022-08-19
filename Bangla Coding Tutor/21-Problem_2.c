#include<stdio.h>

void even_or_odd(int x){
    if(x % 2== 0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
}
int main(){
   even_or_odd(11);


return 0;
}