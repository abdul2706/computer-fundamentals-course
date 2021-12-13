#include <stdio.h>
int main()
{
    printf("Hello\aWorld.\n");
    printf("Hello\bWorld.\n");
    printf("Hello\tWorld.\n");
    printf("Hello\\World.\n");
    printf("Hello\'World.\n");
    printf("Hello\"World.\n");
    getchar();
    return 0;
}