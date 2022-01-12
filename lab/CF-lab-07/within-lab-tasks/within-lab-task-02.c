#include <stdio.h>

int main() {
    char lowercase_string[100], uppercase_string[100] = "";
    int ascii_code, words_count = 0;
    printf("Enter a lowercase string: ");
    gets(lowercase_string);
    for (int i = 0; lowercase_string[i] != '\0'; i++) {
        ascii_code = (int)lowercase_string[i];
        ascii_code = (97 <= ascii_code && ascii_code <= 122) ? (ascii_code - 32) : ascii_code;
        uppercase_string[i] = (char)ascii_code;
        if (ascii_code == 32) {
            words_count++;
        }
    }
    words_count++;
    uppercase_string[i] = '\0';
    printf("Lowercase String: %s\n", lowercase_string);
    printf("Uppercase String: %s\n", uppercase_string);
    printf("Words Count: %d\n", words_count);
    getchar();
    return 0;
}
