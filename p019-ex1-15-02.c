/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：p019-ex1-15-02.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年10月09日
*   Description ：重新编写1-2节中的温度转换程序，使用函数实现温度转换计算
================================================================*/
#include <stdio.h>

double translate(double);

int main() {

    double fahr;
    int upper, lower, step;

    upper = 300;
    lower = 0;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        printf("%3.1f\t%6.1f\n", fahr, translate(fahr));
        fahr += step;
    }



    return 0;
}
double translate(double fahr) {

    return 5.0 / 9.0 * (fahr - 32);
}
