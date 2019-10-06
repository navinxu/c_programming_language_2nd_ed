/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p077-4.11-ex4-14.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年10月06日
*   Description ：
================================================================*/
#include <stdio.h>

#define swap(t,x,y) t temp = x; x = y; y = temp

int main() {

    int x = 10;
    int y = 20;
    swap(int, x, y);
    printf("%d %d\n", x, y);

    return 0;
}
