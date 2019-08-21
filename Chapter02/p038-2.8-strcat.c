/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p038-2.8-strcat.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月21日
*   Description ：
================================================================*/
#include <stdio.h>

void strcat(char s[], const char t[]) {
    int i, j;
    i = j = 0;

    while (s[i] != '\0')
        i ++;

    while ((s[i++] = t[j++]) != '\0')
        ;
}

int main() {

    char s[20] = "Hello";

    printf("Source String: %s\n", s);

    char t[20] = " World.";
    strcat(s, t);

    printf("Result String: %s\n", s);

    return 0;
}
