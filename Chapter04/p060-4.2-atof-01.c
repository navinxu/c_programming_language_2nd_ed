/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p060-4.2-atof-01.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月19日
*   Description ：
================================================================*/
#include <stdio.h>
#include <ctype.h>

#define MAXLINE 100

int getline(char s[], int max_len) {
    int i;
    char c;
    for (i = 0; --max_len > 0 && (c = getchar()) != EOF && c != '\n'; i ++)
        s[i] = c;
    if (c == '\n')
        s[i++] = c;

    s[i] = '\0';
    return i;
}

int main() {
    char line[MAXLINE];
    double sum = 0.0, atof(const char[]);

    while (getline(line, MAXLINE) > 0) {
        sum += atof(line);
    }

    printf("%f\n", sum);


    return 0;
}

double atof(const char s[]) {
    double val, power;
    int i, sign;

    for (i = 0; isspace(s[i]); i ++)
        ;

    sign = (s[i] == '-') ? -1 : 1;

    if (s[i] == '+' || s[i] == '-')
        i ++;

    val = 0;
    while (isdigit(s[i])) {
        val = 10.0 * val + s[i] - '0';
        i ++;
    }

    if (s[i] == '.')
        i ++;

    power = 1;

    while (isdigit(s[i])) {
        val = 10.0 * val + s[i] - '0';
        power *= 10;
        i ++;
    }

    return sign * val / power;
}

