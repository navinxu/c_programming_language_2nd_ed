/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p049-3.4-ex3-2-02.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月07日
*   Description ：
================================================================*/
#include <stdio.h>
#include <string.h>

void unescape(char s[], const char t[]);
int main() {
    char s[100];
    char t[] = "Hello\\t, W\\na\\ol\\nd.\\ta";

    for (int i = 0;i < strlen(s); i++)
        s[i] = '\0';

    printf("%lu\n", strlen(t));
    printf("%s\n", t);
    printf("======================\n");

    unescape(s, t);

    printf("%s", s);


    return 0;
}


void unescape(char s[], const char t[]) {
    if (strlen(t) == 0)
        return;

    for (int i = 0, j = 0; i < strlen(t); i ++, j ++) {
        if (t[i] == '\\') {
            switch (t[++i]) {
                case 'n':
                    s[j] = '\n';
                    break;
                case 't':
                    s[j] = '\t';
                    break;
                default:
                    s[j] = '\\';
                    i --;
            }
        } else 
            s[j] = t[i];
    }
}
