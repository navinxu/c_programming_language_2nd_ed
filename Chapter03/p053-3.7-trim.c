/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p053-3.7-trim.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月11日
*   Description ：
================================================================*/
#include <stdio.h>
#include <string.h>

void trim(char s[]) {
    int i;
    for (i = strlen(s) - 1; i >= 0; i --)
        if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
            break;
    s[i + 1] = '\0';
}

int main() {

    //char s[] = "Hello    ";
    char s[] = "    ";
    printf("%sEND\n", s);
    trim(s);
    printf("%sEND\n", s);


    return 0;
}
