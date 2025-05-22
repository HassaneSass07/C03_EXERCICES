#include <stdio.h>

int main() {
    //Déclaration des variables
    int nombre, inverse = 0;

//Lire la saisie utilisateur
    scanf("%d", &nombre);
    
//Boucle permettant d'inverser les chiffres d'un entier
    while (nombre != 0) {
        inverse = inverse * 10 + nombre % 10;
        nombre /= 10;
    }

    printf("Nombre inversé : %d\n", inverse);
    return 0;
}