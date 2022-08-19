#include<stdio.h>
int main(){
    int a[3][3],i,j,sum=0;
    float average;
    printf("Enter 9 numbers to get average\n");
//insertion

    for (i=0; i<3 ;i++)//for row
    {
        for (j=0;j<3; j++)//for column
        {
           scanf("%d",&a[i][j]);
           sum = sum + a[i][j];
         
        }    
    }
//traverse
     printf("Your inserted elemens are: \n");
     for (i=0;i<3;i++)  //for row
    {
        for (j=0;j<3;j++)//for column
        {
           printf("%d\t",a[i][j]);
        }

        printf("\n");
         
    }
     average=sum/9.0;


printf("Average of array is: %f\n",average);
    
    


return 0;
}