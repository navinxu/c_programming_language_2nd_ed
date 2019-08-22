/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p035-2.7-high_to_low.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月22日
*   Description ：
================================================================*/
#include <stdio.h>


int main() {

    int i = 800;
    char c = 50;

    i = c;
    c = i;
    printf("%d %d\n", i, c);

    i = 800;
    c = 60;
    c = i;
    i = c;
    printf("%d %d\n", i, c);

    double d = 20.1890;
    float f = 30.12354;
    f = d;
    d = f;
    printf("%f %f\n", d, f);

}
