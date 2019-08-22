/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p030-2.3-02-strlen_at_function.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月22日
*   Description ：
================================================================*/
#include <stdio.h>
#include <string.h>

unsigned int get_strlen(const char s[]) {
    return strlen(s);
}

int main() {

    char s[] = "Hello";
    printf("%d\n", get_strlen(s));
}
