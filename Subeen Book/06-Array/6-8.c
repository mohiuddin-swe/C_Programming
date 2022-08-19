#include<stdio.h>
int main() {
    int arr[10]={10,20,30,40,50,60,70,80,90,100};
    int i;

    for (i = 0; i<9  ; i++)
    {
        printf("%dth element is: %d\n", i+1,arr[i]);

    
        
    
    }
      printf("\n \n \t");
     for (i = 0; i < 10; i++)
    {
       
        printf("%dth index is element  %d\n",i,arr[i]);

    
    }
    

    return 0;
}