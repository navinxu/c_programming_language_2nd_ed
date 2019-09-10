/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p053-3.6-ex3-6.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月10日
*   Description ：
================================================================*/
#include <stdio.h>
#include <string.h>

void itoa(int num, char s[], int width);
int main() {
    char s[1000];
    itoa(1024, s, 6);
    printf("%s\n", s);

    return 0;
}

void reverse(char s[]) {
    unsigned long int len = strlen(s);
    unsigned long int end = len - 1;
    unsigned long int begin = 0;

    char temp;
    for (;begin <= end; begin++, end --) {
        temp = s[begin];
        s[begin] = s[end];
        s[end] = temp;
    }
}

void itoa(int num, char s[], int width) {
    int sign;
    unsigned long int i = 0;

    int temp = num, count = 0;
    while (temp != 0)
        temp /= 10, count ++;

    if ((sign = num) < 0) {
        num = -num;
        count ++;
    }

    do {
        s[i++] = num % 10 + '0';
    }while ((num /= 10) > 0);

    if (sign < 0)
        s[i++] = '-';

    if (count < width) {
        int space = width - count;
        while (space--)
            s[i++] = ' ';
    }

    s[i] = '\0';

    reverse(s);
}
