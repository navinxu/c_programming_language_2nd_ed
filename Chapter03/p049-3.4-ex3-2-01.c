/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p049-3.4-ex3-2-01.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月07日
*   Description ：
================================================================*/
#include <stdio.h>
#include <string.h>

void escape(char s[], const char t[]);
int main() {

    char s[100];
    char t[] = "Hello, w\\orld\t.\n\tOH";

    for (int i = 0 ; i < strlen(s); i ++)
        s[i] = '\0';
    printf("%s\n", t);

    escape(s, t);

    printf("%s", s);

    return 0;
}

void escape(char s[], const char t[]) {

    if (strlen(t) == 0)
        return;

    for (int i = 0, j = 0; i < strlen(t); i ++, j ++) {
        switch (t[i]) {
            case '\t':
                s[j++] = '\\';
                s[j] = 't';
                continue;
            case '\n':
                s[j++] = '\\';
                s[j] = 'n';
                continue;
        }

        s[j] = t[i];
    }
}
