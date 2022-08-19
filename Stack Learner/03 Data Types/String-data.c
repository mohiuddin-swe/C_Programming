#include <stdio.h>
int main () {

   //Type 01 

   char name[20];
   name[0]='M';
   name[1]='o';
   name[2]='h';
   name[3]='i';
   name[4]='u';
   name[5]='d';
   name[6]='d';
   name[7]='i';
   name[8]='n';
   printf("\n\nYour name is %s\n\n",name);

   //Type 02 

   char name1[20]= {'d','a','f','f','o','d','i','l',' ','U'};
   printf("Type 2 is %s\n\n",name1);

   //Type 03 

   char name2[30]={"Mohiuddin from cumilla"};
   printf("Type 3 wil be %s\n\n", name2);

   return 0;
}