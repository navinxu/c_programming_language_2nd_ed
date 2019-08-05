/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p023-1.10-02.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月04日
*   Description ：
================================================================*/
#include <stdio.h>

int printChangedNum();

int num = 200;

int main() {

    extern int num;

    printf("%d\n", num);

    num = 100;

    printChangedNum();

    return 0;
}

int printChangedNum() {

    printf("%d\n", num);
}
