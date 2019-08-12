/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p035-01-int_to_char.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月12日
*   Description ：
================================================================*/
#include <stdio.h>

int main() {

    int i = 1001;
    char c = 20;
    // 如果以下语句交换位置，
    // 那么结果将有大不同
    i = c;
    c = i;

    printf("%d %d\n", i, c);

    return 0;
}
