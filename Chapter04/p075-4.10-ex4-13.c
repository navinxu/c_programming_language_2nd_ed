/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p075-4.10-ex4-13.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月28日
*   Description ：
================================================================*/
#include <stdio.h>
#include <string.h>

#define MAXLEN 100

void reverse(const char [], char []);

int main() {

    char s[] = "ba";
    char t[MAXLEN];
    reverse(s, t);
    printf("%sEND", t);

    return 0;
}

void reverse(const char s[], char t[]) {
    if (strlen(s) == 1) {
        *t = s[0];
        return;
    }
    static size_t count = 0;
    static unsigned char flag = 1;
    static size_t len;
    if (flag) {
        len = strlen(s); 
        flag = 0;
    }

    if (*s != '\0') 
        reverse(++s, t);

    if (*s == '\0')
        return;

    t[count++] = *s;
    if (count + 1 == len) {
        t[count++] = *(--s);
        t[count] = '\0';
    }
}
