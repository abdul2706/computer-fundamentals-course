#include<stdio.h>
int main()
{
int a = 7, b = 20, c, d;
c = a++;
printf("%d", c);
printf("\n%d",a);
d = ++b;
printf("\n%d", d);
printf("\n%d",b);
getchar();
return 0;
}

