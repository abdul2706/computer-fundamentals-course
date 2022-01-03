#include <stdio.h>

int main() {
    int player1_number, player2_number, difference, guess_count = 1;
    printf("Guess The Number\n");
    printf("Player1 >> Set a number: ");
    scanf("%d", &player1_number);
    while (1) {
        printf("Player2 >> Make Guess: ");
        scanf("%d", &player2_number);
        difference = player2_number - player1_number;
        if (player2_number == player1_number) {
            printf("Player2 guessed correctly in %d tries\n", guess_count);
            break;
        } else if (-10 <= difference && difference <= 0) {
            printf("Player2 >> Low\n");
        } else if (0 <= difference && difference <= 10) {
            printf("Player2 >> High\n");
        } else if (difference < -10) {
            printf("Player2 >> Too Low\n");
        } else if (difference > 10) {
            printf("Player2 >> Too High\n");
        }
        guess_count++;
    }
    getchar();
    return 0;
}
