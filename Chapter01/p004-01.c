/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   文件名称：p004-01.c
*   创 建 者：Navin Xu
*   电子邮箱：admin@navinxu.com
*   创建日期：2018年09月28日
*   描    述：
================================================================*/
#include <stdio.h>

int main() {

    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    while (fahr <= upper) {

        celsius = 5 * (fahr - 32) / 9;

        printf("%d\t%d\n", fahr, celsius);

        fahr += step;
    }

    return 0;
}
