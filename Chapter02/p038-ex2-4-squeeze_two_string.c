/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p038-ex2-4.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月21日
*   Description ：
================================================================*/
#include <stdio.h>

void squeeze(char s1[], const char s2[]) {
    char c;
    int k = 0;
    for (int i = 0; s1[i] != '\0'; i ++) {
        c = '\0';
        for (int j = 0; s2[j] != '\0'; j ++) {
            if (s1[i] == s2[j]) {
                c = s2[j];
                break;
            }
        }

        if (c == '\0')
            s1[k++] = s1[i];
    }

    s1[k] = '\0';
}

int main() {

    char s[20] = "bdhfsdfjsdfvsdvasl";
    char t[20] = "advil";
    printf("Source string: %s\n", s);
    printf("t: %s\n", t);

    squeeze(s, t);
    printf("Result string: %s\n", s);



    return 0;
}
