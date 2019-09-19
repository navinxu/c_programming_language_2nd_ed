/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p060-4.2-atof.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月19日
*   Description ：
================================================================*/
#include <stdio.h>
#include <ctype.h>

double atof(const char s[]) {
    double val, power;
    int i;

    for (i = 0; isspace(s[i]); i ++)
        ;
    
    int sign = (s[i] == '-') ? -1 : 1;

    if (s[i] == '+' || s[i] == '-')
        i ++;


    val = 0;
    for (;isdigit(s[i]); i ++) 
        val = 10 * val + s[i] - '0';

    if (s[i] == '.')
        i ++;

    power = 1;

    for (; isdigit(s[i]); i ++) {
        val = 10 * val + s[i] - '0';
        power *= 10;
    }

    return sign * val / power; 
}


int main() {

    //char s[] = "   0.123";
    //char s[] = "   10.123";
    //char s[] = "   +10.123";
    //char s[] = "   -10.123";
    //char s[] = "   -10";
    //char s[] = "   -10.";
    //char s[] = "   -10.00000";
    //char s[] = "   +10.00000";
    //char s[] = "   10.00000";
    char s[] = "   10.00001";
    printf("%f\n", atof(s));

    return 0;
}
