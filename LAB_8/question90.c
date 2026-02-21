#include <stdio.h>

int main() {
    char str[100];
    char *p;
    int count=0, count2=0;

    gets(str);
    p = str;

    while(*p!='\0') {
        count++;
        if(*p!=' ')
            count2++;
        p++;
    }

    printf("Length with spaces = %d\n", count);
    printf("Length without spaces = %d\n", count2);
    return 0;
}
