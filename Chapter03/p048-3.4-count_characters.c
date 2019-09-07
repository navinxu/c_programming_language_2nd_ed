/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p048-3.4-count_characters.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月07日
*   Description ： 分别统计空格、数字和其他字符的数目
================================================================*/
#include <stdio.h>

int main() {

    int c, digit[10], other = 0, space = 0;

    for (int i = 0; i < 10; i ++)
        digit[i] = 0;

    while ((c = getchar()) != EOF) {
        putchar(c);
        switch (c) {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                digit[c - '0'] ++;
                break;
            case ' ':
            case '\n':
            case '\t':
                space ++;
                break;
            default:
                other ++;
                break;
        }
    }

    printf("Digits =");
    for (int i = 0 ; i < 10;i ++) {
        if (digit[i] != 0)
            printf("%c%d:%d", (i == 0) ? '\0' : ' ', i, digit[i]);
    }

    printf("\nSpaces = %d, Other = %d", space, other);
}
