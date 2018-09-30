/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：p013-05-1-9-01.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年09月30日
*   Description ：将连续的多个空格用一个空格代替
================================================================*/
#include <stdio.h>

#define NONBLANK 'a'

int main() {
    
    int c, lastc;
    lastc = NONBLANK;

    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            putchar(c);
        } else if (lastc != ' ') {
            putchar(c); 
        }
        // 记录上一个字符
        lastc = c;
    }

    return 0;
}

