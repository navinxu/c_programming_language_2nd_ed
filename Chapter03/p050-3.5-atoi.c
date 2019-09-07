/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p050-3.5-atoi.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月07日
*   Description ：
================================================================*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int atoi(const char s[]);
int main() {

    char s[] = "   -12345a";
    printf("%d", atoi(s));

    return 0;
}

int atoi(const char s[]) {
    int i;
    unsigned long int len = strlen(s);

    for (i = 0; i < len && isspace(s[i]);i ++) ;

    signed char sign = (s[i] == '-') ? -1 : 1;

    if (s[i] == '-' || s[i] == '+')
        i ++;

    int result = 0;
    for (; i < len && isdigit(s[i]); i ++) {
        result = result * 10 + (s[i] - '0');
    }

    return sign * result;
}

