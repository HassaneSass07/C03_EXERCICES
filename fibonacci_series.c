#include <stdio.h>

/* Affiche la suite de Fibonacci jusqu'à une valeur limite */
int main() {
    int limit, a = 0, b = 1, next;
    int first = 1; // Flag pour gérer l'affichage de l'espace

    if (scanf("%d", &limit) != 1) return 0;

    if (limit >= 0) {
        printf("%d", a);
        first = 0;
    }
    if (limit >= 1) {
        if (!first) printf("  ");
        printf("%d", b);
        first = 0;
    }

    next = a + b;
    while (next <= limit) {
        if (!first) printf("  ");
        printf("%d", next);
        first = 0;

        a = b;
        b = next;
        next = a + b;
    }
    printf("\n");
    return 0;
}
