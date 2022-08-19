int main()
 {
 int x, y;

 read:
 printf("Enter a number");
 scanf("%d", &x);

 if (x >0)
    {
        goto read;
    }

 y = sqrt(x);
 printf("%d %d\n", x, y);

 return 0;
 }
