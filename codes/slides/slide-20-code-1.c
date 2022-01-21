#include <stdio.h>

int *add_num_inArray(int k[]);

int main() {
    int i, *ptr_added_array, x[5] = {23, 78, 99, 2, 37};
    ptr_added_array = add_num_inArray(x);
    for (i = 0; i < 5; i++) {
        printf("\n %d", *ptr_added_array);
        ptr_added_array++;
    }
    getchar();
    return 0;
}

int *add_num_inArray(int k[]) {
    int i;
    static int new_array[5];
    for (i = 0; i < 5; i++) {
        new_array[i] = k[i] + 5;
    }
    return new_array;
}

// #include <stdio.h>
// #include <stdlib.h>

// int *add_num_inArray(int k[]);

// int main() {
//     int i, *ptr_added_array, x[5] = {23, 78, 99, 2, 37};
//     for (i = 0; i < 5; i++) {
//         printf("\n %d", x[i]);
//         ptr_added_array++;
//     }
//     printf("\n");
//     ptr_added_array = add_num_inArray(x);
//     for (i = 0; i < 5; i++) {
//         printf("\n %d", *ptr_added_array);
//         ptr_added_array++;
//     }
//     printf("\n");
//     getchar();
//     return 0;
// }

// int *add_num_inArray(int k[]) {
//     int i;
//     int *new_array = (int *)malloc(sizeof(int) * 5);
//     for (i = 0; i < 5; i++) {
//         new_array[i] = k[i] + 5;
//     }
//     return new_array;
// }
