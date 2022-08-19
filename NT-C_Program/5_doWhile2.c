#include <stdio.h>
int main()
{
   int i=0;
   do
   {
	printf("while vs do-while\n");
   }while(i==1);

   while(i==1)
   {
    printf("while vs do-while\n");
   }
   printf("Out of loop");
}
