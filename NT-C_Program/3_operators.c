#include <stdio.h>
main() {
   int a = 21;
   int b = 10;
   int c ;


   c = a / b;
   printf("Value of division is %d\n", c );

   c = a % b;
   printf("Value of modular division is %d\n", c );

   c = a++;
   printf("Value of incrementation is %d\n", c );

   c = a--;
   printf("Value of decrementation is %d\n", c );

   c=++a + ++a;
   printf("Value of c is %d\n", c );
}
