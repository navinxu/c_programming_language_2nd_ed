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

    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    char title_left[] = "fahr", title_right[] = "celsius";

    printf("%3s\t%6s\n", title_left, title_right);

    while (fahr <= upper) {

        celsius = 5.0 * (fahr - 32) / 9.0;

        printf("%3.0f\t%6.1f\n", fahr, celsius);

        fahr += step;
    }

    return 0;
}
