/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p034-2.7-atoi.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月22日
*   Description ：
================================================================*/
#include <stdio.h>

unsigned int atoi(const char s[]) {
    unsigned int result = 0;

    for (int i = 0; s[i] != '\0' && s[i] >= '0' && s[i] <= '9'; i ++)
        result = 10 * result + s[i] - '0';
    return result;
}

int main() {

    char s[] = "12345";
    printf("%u\n", atoi(s));

    char s2[] = "0000001234556";
    printf("%u\n", atoi(s2));

    return 0;
}
