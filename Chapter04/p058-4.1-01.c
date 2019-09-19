/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p058-4.1-01.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月19日
*   Description ：
================================================================*/
#include <stdio.h>

#define MAXLINE 1000

int getline(char s[], int max_len);
int strindex(const char s[], const char t[]);

int main() {

    char line[MAXLINE];
    const char t[] = "found";
    int count = 0;
    while (getline(line, MAXLINE) > 0) {
        if (strindex(line, t) > -1) {
            printf("%s", line);
            count ++;
        }
    }

    return count;
}

int getline(char s[], int max_len) {
    char c;
    int i;

    for (i = 0; --max_len > 0 && (c = getchar()) != EOF && c != '\n'; i ++)
        s[i] = c;

    if (c == '\n')
        s[i++] = c;

    s[i] = '\0';
    return i;
}

int strindex(const char s[], const char t[]) {
    int i, j, k;

    for (i = 0; s[i] != '\0'; i ++) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; k ++, j ++)
            ;
        if (k > 0 && t[k] == '\0')
            return i;
    }

    return -1;
}
