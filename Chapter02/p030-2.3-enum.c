/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p030-2.3-enum.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月22日
*   Description ：
================================================================*/
#include <stdio.h>

enum boolean {NO, YES};

void print_bool(enum boolean bool) {
    printf("%d\n", bool);
}

int main() {

    printf("%d\n", YES);
    printf("%d\n", NO); 

    print_bool(NO);
    print_bool(YES);


    return 0;
}
