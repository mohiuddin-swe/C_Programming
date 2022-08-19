#include<stdio.h>
#define PI 3.14
int main() {
   float radius, area;

   printf("\nEnter the radius of Circle : ");
   scanf("%f", &radius);

   area = PI * radius * radius;
   printf("\nArea of Circle : %f", area);

   return (0);
}
