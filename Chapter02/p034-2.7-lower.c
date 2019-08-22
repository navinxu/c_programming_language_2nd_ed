/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p034-2.7-lower.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月22日
*   Description ：
================================================================*/
#include <stdio.h>

int lower(const char c) {
    if (c >= 'A' && c <= 'Z')
        return c - 'A' + 'a';
    else
        return c;
}

int main() {

    char c = 'b';
    printf("%c\n", lower(c));

    char c2 = 'B';
    printf("%c\n", lower(c2));

    unsigned char c3;
    c3 = getchar();
    printf("%c\n", c3);


    return 0;
}
