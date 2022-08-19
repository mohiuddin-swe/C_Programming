#include <stdio.h>
#include <string.h>

int main () {
   char src[40]="My Name is Nusrat";
   char dest[40]="tasnim";


   strcpy(dest,src);
   //strncpy(dest, src, 10);//Explanation Needed



   printf("Final copied string : %s\n", dest);

   return(0);
}
