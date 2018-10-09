/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：p019-ex1-15.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年10月09日
*   Description ：重新编写1-2节中的温度转换程序，使用函数实现温度转换计算
================================================================*/
#include <stdio.h>

int temperature_translator(int *, int *);

int main() {

    
    int fahr, celsius;
    fahr = celsius = 0;

    temperature_translator(&fahr, &celsius);

    return 0;
}

int  temperature_translator(int *fahr, int *celsius) {
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    * fahr = lower;
    while (*fahr <= upper) {
        *celsius = 5 * (*fahr - 32) / 9;
        printf("%d\t%d\n", *fahr, *celsius);
        *fahr = *fahr + step;
    }
}

