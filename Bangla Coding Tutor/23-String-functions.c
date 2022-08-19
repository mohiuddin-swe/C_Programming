#include<stdio.h>
#include<string.h>
int main(){
    /*
    //Strlen

    char a[]="Bangladesh";

    int l = strlen(a);

    printf("Length of your string is :%d\n",l);
    */





   /*char a[]="Bangladesh";

   char b[]="Dhaka";

   strcpy(a,b);

   printf("Value of a is %s\n",a);
   printf("Value of b is %s\n",b);*/





   /*char a[20]="Dhaka";
   char b[20]="Dhaka";

   int x =strcmp(a,b);
   if(x==0){
    printf("a and b is equal\n");
   }
   else{
    printf("a and b is not equal\n");
   }*/



   char a[20]="Bangladesh\t";
   char b[20]="Dhaka";

   strcat(a,b);
   printf("Value of a is: %s\n",a);
   printf("Value of b is: %s\n",b);

   




return 0;
}