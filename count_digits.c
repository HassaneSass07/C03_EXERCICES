#include <stdio.h>

int main() {
    //Déclaration des différentes variables
    int n, original, count = 0;
    //Conditions muitiples 
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    original = n;

    if (n == 0) {
        count = 1;
    } else {
        if (n < 0) n = -n;
        while (n > 0) {
            n /= 10;
            count++;
        }
    }

    printf("%d contient %d chiffre(s).\n", original, count);

    return 0;
}
a