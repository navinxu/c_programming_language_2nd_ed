/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p041-ex2-9-remove_1.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月23日
*   Description ：
================================================================*/
#include <stdio.h>

unsigned int bitcount(unsigned int x) {
    unsigned int count;

    for (count = 0; x != 0; x &= x - 1)
        count ++;
    return count;
}

int main() {

    printf("%u\n", bitcount(123456));


    return 0;
}
