/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p037-2.8-01.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月21日
*   Description ：
================================================================*/
#include <stdio.h>

int main() {

    int i = 100;
    printf("%d\n", i++); // 100
    i = 100;
    printf("%d\n", ++i); // 101

    return 0;
}
