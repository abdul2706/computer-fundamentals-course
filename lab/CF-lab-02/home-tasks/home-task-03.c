#include <math.h>
#include <stdio.h>

int main() {
    int operator_type;
    double number1, number2, answer;
    double radian_to_degree_factor = M_PI / 180;

    printf("Please select any one from below:\n");
    printf("1- Addition\n");
    printf("2- Subtraction\n");
    printf("3- Multiplication\n");
    printf("4- Division\n");
    printf("5- Reminder(Mod)\n");
    printf("6- Power\n");
    printf("7- Exponential\n");
    printf("8- Absolute Value\n");
    printf("9- Sin\n");
    printf("10- Cos\n");
    printf("11- Tan\n");
    printf("12- Sec\n");
    printf("13- Csc\n");
    printf("14- Cot\n");
    scanf("%d", &operator_type);

    if (operator_type < 1 && operator_type > 14) {
        printf("Invalid input given, you must select number between 1-14, try again.\n");
        getchar();
        return 0;
    }

    switch (operator_type) {
    case 1:
        printf("Enter value for number 1 = ");
        scanf("%lf", &number1);
        printf("Enter value for number 2 = ");
        scanf("%lf", &number2);
        answer = number1 + number2;
        printf("%.2f + %.2f = %.2f\n", number1, number2, answer);
        break;
    case 2:
        printf("Enter value for number 1 = ");
        scanf("%lf", &number1);
        printf("Enter value for number 2 = ");
        scanf("%lf", &number2);
        answer = number1 - number2;
        printf("%.2f - %.2f = %.2f\n", number1, number2, answer);
        break;
    case 3:
        printf("Enter value for number 1 = ");
        scanf("%lf", &number1);
        printf("Enter value for number 2 = ");
        scanf("%lf", &number2);
        answer = number1 * number2;
        printf("%.2f * %.2f = %.2f\n", number1, number2, answer);
        break;
    case 4:
        printf("Enter value for number 1 = ");
        scanf("%lf", &number1);
        printf("Enter value for number 2 = ");
        scanf("%lf", &number2);
        answer = number1 / number2;
        printf("%.2f / %.2f = %.2f\n", number1, number2, answer);
        break;
    case 5:
        printf("Enter value for number 1 = ");
        scanf("%lf", &number1);
        printf("Enter value for number 2 = ");
        scanf("%lf", &number2);
        answer = (int)number1 % (int)number2;
        printf("%d %% %d = %.2f\n", (int)number1, (int)number2, answer);
        break;
    case 6:
        printf("Enter value for number 1 = ");
        scanf("%lf", &number1);
        printf("Enter value for number 2 = ");
        scanf("%lf", &number2);
        answer = pow(number1, number2);
        printf("power(%.2f, %.2f) = %.2f\n", number1, number2, answer);
        break;
    case 7:
        printf("Enter a value = ");
        scanf("%lf", &number1);
        answer = exp(number1);
        printf("exp(%.2f) = %.2f\n", number1, answer);
        break;
    case 8:
        printf("Enter a value = ");
        scanf("%lf", &number1);
        answer = fabs(number1);
        printf("abs(%.2f) = %.2f\n", number1, answer);
        break;
    case 9:
        printf("Enter a value (in degrees) = ");
        scanf("%lf", &number1);
        answer = sin(radian_to_degree_factor * number1);
        printf("sin(%.2f) = %.2f\n", number1, answer);
        break;
    case 10:
        printf("Enter a value (in degrees) = ");
        scanf("%lf", &number1);
        answer = cos(radian_to_degree_factor * number1);
        printf("cos(%.2f) = %.2f\n", number1, answer);
        break;
    case 11:
        printf("Enter a value (in degrees) = ");
        scanf("%lf", &number1);
        answer = tan(radian_to_degree_factor * number1);
        printf("tan(%.2f) = %.2f\n", number1, answer);
        break;
    case 12:
        printf("Enter a value (in degrees) = ");
        scanf("%lf", &number1);
        answer = 1 / cos(radian_to_degree_factor * number1);
        printf("sec(%.2f) = %.2f\n", number1, answer);
        break;
    case 13:
        printf("Enter a value (in degrees) = ");
        scanf("%lf", &number1);
        answer = 1 / sin(radian_to_degree_factor * number1);
        printf("csc(%.2f) = %.2f\n", number1, answer);
        break;
    case 14:
        printf("Enter a value (in degrees) = ");
        scanf("%lf", &number1);
        answer = 1 / tan(radian_to_degree_factor * number1);
        printf("cot(%.2f) = %.2f\n", number1, answer);
        break;
    default:
        break;
    }

    getchar();
    return 0;
}
