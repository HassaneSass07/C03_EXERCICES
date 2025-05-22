#include <stdio.h>

/* Compte le nombre de chiffres dans un entier positif */
int main() {
    int n, count = 0, temp;
    scanf("%d", &n);

    temp = n == 0 ? 1 : n;
    while (temp != 0) {
        count++;
        temp /= 10;
    }
    printf("%d contient %d chiffre(s).\n", n, count);
    return 0;
}
