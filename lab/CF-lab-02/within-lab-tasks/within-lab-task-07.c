#include <stdio.h>

int main() {
    int temperature;
    printf("Enter temperature in centigrade: ");
    scanf("%d", &temperature);
    // char *message = (temperature < 0) ? "Freezing weather" : (temperature <= 10) ? "Very Cold weather" : (temperature <= 20) ? "Cold weather" : (temperature <= 30) ? "Normal in Temp" : (temperature <= 40) ? "Its Hot" : "Its Very Hot";
    // printf("%s", message);
    printf("%s", (temperature < 0) ? "Freezing weather" : (temperature <= 10) ? "Very Cold weather" : (temperature <= 20) ? "Cold weather" : (temperature <= 30) ? "Normal in Temp" : (temperature <= 40) ? "Its Hot" : "Its Very Hot");
    // (temperature < 0) ? printf("Freezing weather") : (temperature <= 10) ? "Very Cold weather" : (temperature <= 20) ? "Cold weather" : (temperature <= 30) ? "Normal in Temp" : (temperature <= 40) ? "Its Hot" : "Its Very Hot";
    getchar();
    return 0;
}
