/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p036-01-double_to_float.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月12日
*   Description ：
================================================================*/
#include <stdio.h>

int main() {
    double d = 20.88;
    float f = 10.99;

    // 即不截取，也不四舍五入
    f = d;
    d = f;

    printf("%f %f\n", d, f);

    return 0;
}
