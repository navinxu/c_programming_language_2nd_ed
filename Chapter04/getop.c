/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：getop.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月27日
*   Description ：
================================================================*/
#include <stdio.h>
#include <ctype.h>
#include "calc.h"
int getop(char s[]) {
    int i, c;
    // static int lastc = 0;
    //
    // if (!lastc)
    //     c = getch();
    // else {
    //     c = lastc;
    //     lastc = 0;
    // }

    while ((s[0] = c = getch()) == ' ' || c == '\t')
        ;
    s[1] = '\0';
    if (!isdigit(c) && c != '.')
        return c;
    i = 0;
    if (isdigit(c))
        while (isdigit(s[++i] = c = getch()))
            ;
    if (c == '.')
        while (isdigit(s[++i] = c= getch()))
            ;
    s[i] = '\0';
    if (c != EOF)
        // lastc = c;
        ungetch(c);
    return NUMBER;

}
