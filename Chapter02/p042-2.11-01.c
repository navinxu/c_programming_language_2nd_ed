/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p042-2.11-01.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月21日
*   Description ：
================================================================*/
#include <stdio.h>

void print_array(int *nums, unsigned int length) {
    for (int i = 0; i < length; i++)
        printf("%6d%c", nums[i], (i % 10 == 9 || i == length - 1) ? '\n' : ' ');
}

int main() {

    int nums[] = {1, 4, 0, 1, 10, 100, 20, 50, 99, 10000, 1001, 20, 25, 8, 13, 5, 1, 12, 1000, 20, 2, 80};
    print_array(nums, sizeof(nums) / sizeof(int));

    return 0;
}
