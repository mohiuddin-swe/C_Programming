#include<stdio.h>

struct student{
        int id;
        float cgpa;
        char name[20];
        };

   int main(){

    struct student s;
    printf("Enter your id\n");
    scanf("%d",&s.id);
    printf("Enter your cgpa\n");
    scanf("%f",&s.cgpa);
    printf("Enter your Name:\n");
    scanf("%s",s.name);

    printf("Id:%d\t cgpa:%f\t  Name:%s",s.id,s.cgpa,s.name);



return 0;
}