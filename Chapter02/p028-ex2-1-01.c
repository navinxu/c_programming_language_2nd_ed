/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p028-ex2-1-01.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月12日
*   Description ：
================================================================*/
#include <stdio.h>
#include <limits.h>

int main() {

    printf("下面打印 signed 限定的各种数据类型的范围：\n");
    printf("-- Max of signed char: %d\n", SCHAR_MAX);
    printf("-- Min of signed char: %d\n", SCHAR_MIN);
    printf("-- Max of signed short: %d\n", SHRT_MAX);
    printf("-- Min of signed short: %d\n", SHRT_MIN);
    printf("-- Max of signed int: %d\n", INT_MAX);
    printf("-- Max of signed int: %d\n", INT_MIN);
    printf("-- Min of signed long: %ld\n", LONG_MAX);
    printf("-- Min of signed long: %ld\n", LONG_MIN);

    printf("下面打印 unsigned 限定的各种数据类型的范围：\n");
    printf("-- Max of unsigned char: %u\n", UCHAR_MAX);
    printf("-- Max of unsigned short: %u\n", USHRT_MAX);
    printf("-- Max of unsigned int: %u\n", UINT_MAX);
    printf("-- Max of unsigned long: %lu\n", ULONG_MAX);

    return 0;
}
