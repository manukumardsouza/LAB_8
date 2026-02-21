#include <stdio.h>

int main() {
    int a[5], *p, max;
    p = a;

    for(int i=0;i<5;i++)
        scanf("%d", p+i);

    max = *p;
    for(int i=1;i<5;i++)
        if(*(p+i) > max)
            max = *(p+i);

    printf("Biggest = %d", max);
    return 0;
}
