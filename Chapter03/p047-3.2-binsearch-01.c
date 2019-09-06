/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p047-3.2-01.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月05日
*   Description ：
================================================================*/
#include <stdio.h>

int binsearch(int, int[], int);

int main() {

    int num = 19;
    int arr[] = {1, 3, 4, 6, 8, 12, 15, 18, 29};
    int len = sizeof(arr) / sizeof(int);

    
    printf("%d\n", binsearch(num, arr, len));

    return 0;
}

int binsearch(int num, int arr[], int len) {
    int low = 0, high = len -1;
    int mid = (low + high) / 2;

    while (low <= high) {
        if (num < arr[mid])
            high = mid - 1;
        else if (num > arr[mid])
            low = mid + 1;
        else
            return mid;
        mid = (low + high) / 2;
    }

    return -1;
}
