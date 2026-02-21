#include <stdio.h>

int main() {
    char str[100];
    char *p;
    int words=1;

    gets(str);
    p=str;

    while(*p!='\0') {
        if(*p==' ')
            words++;
        p++;
    }

    printf("Words = %d", words);
    return 0;
}
