#include <stdio.h>

int main() {
    int limit;
    if (scanf("%d", &limit) != 1) return 0;

    int a = 0, b = 1;
    if (limit >= 0) printf("%d", a);
    if (limit >= 1) printf(" %d", b);

    int next = a + b;
    while (next <= limit) {
        printf(" %d", next);
        a = b;
        b = next;
        next = a + b;
    }
    printf("\n");
    return 0;
}
