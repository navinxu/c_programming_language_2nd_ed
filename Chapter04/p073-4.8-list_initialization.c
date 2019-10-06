/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p073-4.8-list_initialization.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年10月06日
*   Description ：
================================================================*/
#include <stdio.h>

int main() {

    int nums[10];

    for (int i = 0; i < 10; ++ i) 
        printf("%d ", nums[i]);
    printf("\n");

    int nums2[10] = {0};

    for (int i = 0; i < 10; ++ i) 
        printf("%d ", nums2[i]);

    return 0;
}
