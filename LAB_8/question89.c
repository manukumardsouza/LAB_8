#include <stdio.h>

int main() {
    int a[5], b[5];
    int *p = a, *q = b;

    for(int i=0;i<5;i++)
        scanf("%d", p+i);

    for(int i=0;i<5;i++)
        *(q+i) = *(p+4-i);

    for(int i=0;i<5;i++)
        printf("%d ", b[i]);

    return 0;
}
