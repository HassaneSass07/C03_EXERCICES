#include <stdio.h>

int main(void) {
//Déclaration de variable
    int limit;

    if (scanf("%d", &limit) != 1) {
        return 0;
    }
//Déclaration des variables 
    int a = 0, b = 1;
//Conditions permettant de vérifier la limite
    if (limit > 0) printf("%d ", a);
    if (limit > 1) printf("%d ", b);

    int next = a + b;
    //Boucle s'arrêtant une fois la limite atteinte
    while (next <= limit) {
        printf("%d ", next);
        a = b;
        b = next;
        next = a + b;
    }
    printf("\n");

    return 0;
}