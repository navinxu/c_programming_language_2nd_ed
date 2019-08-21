/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p042-ex2-10-lower.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月21日
*   Description ：
================================================================*/
#include <stdio.h>

void lower(char s[], unsigned int size) {
    for (int i = 0; i < size; i ++) {
        s[i] = (s[i] >= 'A' && s[i] <= 'Z') ? s[i] - 'A' + 'a' : s[i];
    }
}

int main() {

    char s[] = "Hello, world.";
    printf("Source string is: %s\n", s);
    lower(s, sizeof(s) / sizeof(char));
    printf("Result string is: %s\n", s);

    return 0;
}
