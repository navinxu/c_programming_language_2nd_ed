/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p030-2.3-02-strlen.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月22日
*   Description ：
================================================================*/
#include <stdio.h>

int stringlen(const char s[]) {
    int len = 0;
    
    while (s[len] != '\0')
        len ++;

    return len;
}

int main() {

    char s[] = "Hello";
    printf("%d\n", stringlen(s));

    return 0;
}
