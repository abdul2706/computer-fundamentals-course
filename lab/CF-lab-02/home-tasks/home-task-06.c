#include <stdio.h>

int main() {
    int first_choice = 1;
    switch (first_choice + 1) {
    case 1:
        printf("Roast beef\n");
        break;
    case 2:
        printf("Roast worms\n");
        break;
    case 3:
        printf("Chocolate ice cream\n");
    case 4:
        printf("Onion ice cream\n");
        break;
    default:
        printf("Bon appetit!\n");
    }
    getchar();
    return 0;
}
