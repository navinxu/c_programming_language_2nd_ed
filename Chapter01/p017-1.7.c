/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：p015-1.6-01.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年10月09日
*   Description ：编写并调用power函数计算幂值
================================================================*/
#include <stdio.h>

int power(int, int);

int main() {

    
    for (int i = 1; i <= 10; i++) 
        printf("%d，power(2,i):%d，power(-3,i):%d\n", i, power(2,i), power(-3, i));

    return 0;
}

int power(int base, int n) {
    int product = 1;

    for (int i = 1; i <= n; i++) {
        product *= base; 
    }

    return product;
}

