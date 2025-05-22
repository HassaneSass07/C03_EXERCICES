#include <stdio.h>

int main() {
    //Déclare une variable à virgule flottante
    float celsius;
    if (scanf("%f", &celsius) != 1) {
        return 0;
    }
    //Fonction permettant la conversion de température
    float fahrenheit = celsius * 9.0f / 5.0f + 32.0f;
    printf("%.1f°C équivaut à %.1f°F\n", celsius, fahrenheit);

    return 0;
}
