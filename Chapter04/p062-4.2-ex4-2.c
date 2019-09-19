/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p062-4.2-ex4-2.c
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

    val = 0.0;
    for (; isdigit(s[i]); i ++)
        val = 10.0 * val + s[i] - '0';

    if (s[i] == '.')
        i ++;

    power = 1;
    for (; isdigit(s[i]); i ++) {
        val = 10.0 * val + s[i] - '0';
        power *= 10;
    }

    val = sign * val / power;

    power = 1;
    if (s[i] == 'e' || s[i] == 'E') {
        i ++;
        sign = (s[i] == '-') ? -1 : 1;
        if (s[i] == '+' || s[i] == '-')
            i ++;

        int e_power = 0;
        for (; isdigit(s[i]); i ++)
            e_power = 10 * e_power + s[i] - '0';

        while (e_power --)
            power *= 10; 

        if (sign == -1)
           power = 1.0 / power; 
    }

    return(val * power);
}


int main() {

    //printf("%g\n", atof("900.2331e3"));
    printf("%f\n", atof("123.45e-6"));


    return 0;
}
