#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    printf("Ascii value of %c is %d\n", ch, ch);

    getchar();
    return 0;
}
