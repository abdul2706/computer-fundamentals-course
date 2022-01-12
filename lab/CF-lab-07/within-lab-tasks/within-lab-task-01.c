#include <stdio.h>

int main() {
    char input_char;
    int ascii_code;
    printf("Enter a character: ");
    input_char = getchar();
    ascii_code = (int)input_char;
    if (65 <= ascii_code && ascii_code <= 90) {
        printf("Type: Capital Letter\n");
    } else if (97 <= ascii_code && ascii_code <= 122) {
        printf("Type: Small Letter\n");
    } else if (48 <= ascii_code && ascii_code <= 57) {
        printf("Type: Digit\n");
    } else {
        printf("Type: Special Symbol\n");
    }
    getchar();
    return 0;
}
