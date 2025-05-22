#include <stdio.h>

/* Affiche la suite de Fibonacci jusqu'à une valeur limite */
int main() {
    int limit, a = 0, b = 1, next;
    scanf("%d", &limit);

    if (limit >= 0) printf("%d ", a);
    if (limit >= 1) printf("%d ", b);

    next = a + b;
    while (next <= limit) {
        printf("%d ", next);
        a = b;
        b = next;
        next = a + b;
    }
    printf("");
    printf("\n");
    return 0;
}
