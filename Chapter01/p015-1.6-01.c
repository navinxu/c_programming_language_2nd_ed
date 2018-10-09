/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：p015-1.6-01.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年10月09日
*   Description ：统计各个数字、空白符及其他字符出现的次数
================================================================*/
#include <stdio.h>

int main() {

    int c, nwhite, nother;
    int ninteger[10];

    for (int i = 0; i < 10; i ++) {
        ninteger[i] = 0;
    }

    nwhite = nother = 0;

    while ((c = getchar()) != EOF) {

        if (c >= '0' && c <= '9') {
            ninteger[c - '0'] ++;
        } else if (c == '\n' || c == ' ' || c == '\t') {
            nwhite ++;
        } else {
            nother ++;
        }
    }


    for (int i = 0; i < 10; i++)
        printf("%d %d\n", i, ninteger[i]);

    printf("Have %d white characters\n", nwhite);
    printf("Have %d other characters\n", nother);

    return 0;
}

