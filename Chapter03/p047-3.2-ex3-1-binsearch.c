/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p047-3.2-ex3-1-binsearch.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月06日
*   Description ：
================================================================*/
#include <stdio.h>

int binsearch(int num, int arr[], int len) {
    // 数组下标
    int low = 0, high = len - 1, mid;
    mid = (low + high) / 2;

    while (low <= high && num != arr[mid]) {
        if (num > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
        mid = (low + high) / 2;
    }

    if (num == arr[mid])
        return mid;
    else 
        return -1;
}

int main() {

    int nums[] = {2, 8, 15, 19, 20, 38, 51, 53, 100};
    int len = sizeof(nums) / sizeof(int);

    printf("%d\n", binsearch(19, nums, len));



    return 0;
}
