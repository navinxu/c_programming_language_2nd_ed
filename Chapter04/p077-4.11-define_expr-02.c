/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p077-4.11-define_expr-02.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年10月06日
*   Description ：
================================================================*/
#include <stdio.h>

#define paste(front, back) front## back

int main() {
    
    int paste(val, 1) = 2;
    printf("%d\n", paste(val, 1));

    return 0;
}
