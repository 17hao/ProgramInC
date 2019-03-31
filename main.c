#include <stdio.h>
#include "main.h"

int main() {
    int val = 12345; // 0x00003039
    show_bytes_test(val);
    int m = 1;
    int n = 2;
    inplace_swap(&m, &n);
    printf("m = %d n = %d\n", m, n);
    pointerArray();
    int len = myStrlen("string");
    printf("%d\n", len);
    char *s;
    char *t = "string";
    //myStrCpy_V1(&s, &t);
    //myStrCpy_V2(&s, &t);
    myStrCpy_V3((char *) &s, &t);
    printf("%s\n", s);
    printNum(1234);
    int array[] = {3, 2, 5, 4, 7, 9, 1};
    qsort(array, 0, 7);
    for (int i = 0; i < 8; i++) {
        printf("%d ", array[i]);
    }
}