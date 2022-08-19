#include<stdio.h>
int main() {
    int scores[5];

    scores[0]=89;
    scores[1]=89;
    scores[2]=89;
    scores[3]=89;
    scores[4]=89;

   //sum of Scores

   int sum=0, i;
   for (i = 0; i < 5; i++)
   {
     sum+= scores[i];
   }

   printf("Sum is = %d\n",sum);

   //Find Average Scores 

   printf("Average number is %d\n",sum/5);

   //Find highest scores 

   int max= scores[0];
   for (i = 1; i < 5; i++)
   {
     if (scores[i]>max)
     {
        max=scores[i];
     }
     
   }

   printf("Highest score is %d\n",max);
   
   
   return 0;
   

}