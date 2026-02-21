#include <stdio.h>

int main() {
    int n;
    int *p = &n;

    scanf("%d", &n);
    printf("Square = %d\n", (*p)*(*p));
    printf("Cube = %d\n", (*p)*(*p)*(*p));

    return 0;
}
