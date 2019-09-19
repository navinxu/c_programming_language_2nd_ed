/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p060-4.1-ex4-1-01.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月19日
*   Description ：
================================================================*/
#include <stdio.h>

int strrindex(char s[], char t[]) {
    int i, j, k, pos;

    pos = -1;
    for (i = 0; s[i] != '\0'; i ++) {
        for (j = i, k = 0; t[k] != '\0' && t[k] == s[j]; k ++, j ++)
            ;
        if (k > 0 && t[k] == '\0') {
            pos = i;
        }
    }

    return pos;
}

int main() {
    char s[] = "A quick fat dog jumps over tdog jumps he lazy cat.";
    char t[] = "og jum";
    printf("%d\n", strrindex(s, t));

    return 0;
}
