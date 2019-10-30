/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p083-5.2-ex5-1.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年10月30日
*   Description ：
================================================================*/
#include <stdio.h>
#include <ctype.h>

#define BUFFERMAX 100
#define MAXLEN 5
int bufferIndex = 0;
int buffer[BUFFERMAX];

int getch();
void ungetch(int);
int getint(int *);

int main () {

    int array[MAXLEN] = {0};

    for (int i = 0; i < MAXLEN && getint(&array[i]) != EOF; ++ i)
        ;

    for (int i = 0; i < MAXLEN; ++ i) 
        printf("%d,", array[i]);

    return 0; 
}

    int getch() {
        return (bufferIndex > 0) ? buffer[--bufferIndex] : getchar();
    }

void ungetch(int c) {
    if (bufferIndex < BUFFERMAX) {
        buffer[bufferIndex ++] = c;
    }
}

int getint(int *pn) {
    int c, sign;

    while ((c = getch()) && isspace(c))
        ;

    if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
        ungetch(c);
        return 0;
    }

    sign = (c == '-') ? -1 : 1;

    if (c == '+' || c == '-')
        c = getch();

    if (!isdigit(c)) {
        *pn = 0;
        while (!isspace(c = getch()))
            ;
        ungetch(c);
        return c;
    }

    for (*pn = 0; isdigit(c); c = getch())
        *pn = 10 * *pn + c - '0';

    *pn *= sign;

    if (c != EOF)
        ungetch(c);

    return c;

}


