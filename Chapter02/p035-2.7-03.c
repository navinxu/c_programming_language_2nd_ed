/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p035-2.7-03.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月26日
*   Description ：
================================================================*/
#include <stdio.h>

int main() {
    int i = 1000;
    unsigned char c = 50;
    c = i;
    printf("%d\n", c); // 232
    return 0;
}
