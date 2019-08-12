/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p036-01-float_to_int.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月12日
*   Description ：
================================================================*/
#include <stdio.h>

int main() {

    float f = 10.58;
    int i = 20;

    i = f;
    f = i;

    printf("%f %d\n", f, i);

    return 0;
}
