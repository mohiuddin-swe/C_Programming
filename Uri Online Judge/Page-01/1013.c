#include<stdio.h>
#include<math.h>
int main(){
    int a,b,s,MaiorAB;
    scanf("%d %d %d",&a,&b,&s);
    MaiorAB =(a+b+abs(a-b))/2;
    printf("%d eh o maior",MaiorAB);

    return 0;

}