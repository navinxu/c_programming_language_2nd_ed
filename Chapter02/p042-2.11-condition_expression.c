/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p042-2.11-condition_expression.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月27日
*   Description ：
================================================================*/
#include <stdio.h>

int main() {

    int n = 100;

    printf("%d\n", 20 + ((n > 10) ? 10 : n)  + 30);

    return 0;
}
