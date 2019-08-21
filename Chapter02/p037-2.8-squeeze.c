/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p037-2.8-02.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月21日
*   Description ：
================================================================*/
#include <stdio.h>

void squeeze(char s[], char c) {
    int i, j;
    for (i = j = 0; s[i] != '\0'; i ++) 
        if (s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
}

int main() {

    char s[] = "asdjfvejn";
    printf("Source string: %s\n", s);
    squeeze(s, 'j');
    printf("After string: %s\n", s);

    return 0;
}
