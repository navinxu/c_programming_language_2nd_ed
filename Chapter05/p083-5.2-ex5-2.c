/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p083-5.2-ex5-2.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年10月30日
*   Description ：
*   -ac123    +56.12a    99ncd .123     bcd344.12    abcd   bac+12.3 ook-92  von+   -.03    -123.574    +0.453    8.000     0.000     +abc512.12     88    12.88aaa123     588.0
================================================================*/
#include <stdio.h>
#include <ctype.h>

#define BUFFERMAX 100
#define MAXLEN 18

int bufferIndex = 0;
int buffer[BUFFERMAX];

int getch();
void ungetch(int);
int getfloat(double *p);

int main() {

    double array[MAXLEN] = {0.0};
    for (int i = 0; i < MAXLEN && getfloat(&array[i]) != EOF; ++ i) 
        printf("%.2f,", array[i]);


    return 0;
}

/**
 *
 *
 * 获取一个字符
 * 从标准输入，或者从缓存
 * 当缓存中有字符时，就从缓存中取
 */
int getch() {
    return (bufferIndex > 0) ? buffer[--bufferIndex] : getchar();
}

/**
 *
 *
 * 保存一个字符到缓存中
 * 本函数的主要作用是当在程序中获得多余的字符时，
 * 该字符在下一次的字符读取时可能有用，可能无用，
 * 可以先把它放进缓存，等待下次读取。
 */
void ungetch(int c) {
    if (bufferIndex < BUFFERMAX)
        buffer[bufferIndex ++] = c;
}

int getfloat(double *p) {
    int c, sign;
    sign = 1;
    *p = 0.0;

    while (isspace(c = getch()))
        ;

    if (!isdigit(c) && c != EOF && c != '+' && c != '-' && c != '.') {
        c = getch();
        while (!isspace(c) && c != EOF) {
            c = getch();
        }
    }

    if (c == '+' || c == '-') {
        sign = (c == '-') ? -1 : 1;
        c = getch();
    }

    if (!isdigit(c) && c != '.') {
        while (!isspace(c) && c != EOF) {
            c = getch();
        }
    }

    while (isdigit(c)) {
        *p = 10 * *p + c -'0';
        c = getch();
    }

    // 获取小数部分
    if (c == '.') {
        int ten = 1;
        double result = 0;
        while (isdigit(c = getch())) {
            result = 10 * result + c - '0';
            ten *= 10;
        }

        result /= ten;
        *p += result;
    }
    if (*p != 0.00)
        *p *= sign;

    while (!isspace(c) && !isdigit(c) && c != EOF) {
        c = getch();
    } 

    if (isdigit(c)) {
        c = getch();
        while (!isspace(c) && c != EOF) {
            c = getch();
        }
    }

    if (c != EOF)
        ungetch(c);

    return c;
}

