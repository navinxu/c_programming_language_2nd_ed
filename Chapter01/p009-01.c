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

    char title_left[] = "celsius", title_right[] = "fahr";

    printf("%3s\t%6s\n", title_left, title_right);

    for (celsius = 300; celsius >= 0; celsius -= 20)
        printf("%3.0f\t%6.1f\n", celsius, celsius * 9.0 / 5.0 + 32);

    return 0;
}
