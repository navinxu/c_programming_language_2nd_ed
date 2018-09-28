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

    celsius = lower;

    char title_left[] = "celsius", title_right[] = "fahr";

    printf("%3s\t%6s\n", title_left, title_right);

    while (celsius <= upper) {

        fahr = 9.0 * celsius / 5.0 + 32;

        printf("%3.0f\t%6.1f\n", celsius, fahr);

        celsius += step;
    }

    return 0;
}
