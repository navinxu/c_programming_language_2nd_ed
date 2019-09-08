/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p052-3.5-ex3-3.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月07日
*   Description ：
================================================================*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void expand(char s1[], char s2[]);
int main() {
    char s1[] = "-a-z";
    char s2[100];
    expand(s1, s2);
    printf("%s\n", s1);
    printf("%s\n", s2);
    

    return 0;
}

void expand(char s1[], char s2[]) {
}
