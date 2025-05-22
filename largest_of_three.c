#include <stdio.h>

/* Ce programme lit trois entiers et affiche le plus grand. */
int main() {
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);

    /* Utilisation de conditions imbriquées pour trouver le maximum */
    max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    printf("Le plus grand nombre est : %d\n", max);
    return 0;
}
