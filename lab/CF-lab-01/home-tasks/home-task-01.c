#include <stdio.h>

int main()
{
    char ch = 'A';
    printf("Character is %c\n", ch);
    char *string = "fresh2refresh.com";
    printf("String is %s\n", string);
    float float_num = 10.234;
    printf("Float value is %.6f\n", float_num);
    int integer_num = 150;
    printf("Integet value is %d\n", integer_num);
    double double_num = 20.123456789;
    printf("Double value is %.6lf\n", double_num);
    int octal_num = 0226;
    printf("Octal value is %o\n", octal_num);
    int hex_num = 0x96;
    printf("Hexadecimal value is %x\n", hex_num);

    getchar();
    return 0;
}
