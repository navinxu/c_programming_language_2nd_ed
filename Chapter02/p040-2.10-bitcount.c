/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p040-2.10-bitcount.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月21日
*   Description ：
================================================================*/
#include <stdio.h>

int bitcount(unsigned int x) {
    int b;
    for (b = 0; x != 0; x >>= 1) {
        if (x & 1)
            b ++;
    }

    return b;
}

int main() {

    printf("%d\n", bitcount(10));

    return 0;
}
