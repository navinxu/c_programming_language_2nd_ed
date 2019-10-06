/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p077-4.11-define_expr.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年10月06日
*   Description ：
================================================================*/
#include <stdio.h>

#define dprint(expr) printf(#expr " = %d\n", expr);

int main () {

    int x = 10;
    int y = 5;
    dprint(x / y);
    dprint(10 / 5);

    return 0;
}
