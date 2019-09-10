/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p054-3.8-goto.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月11日
*   Description ：
================================================================*/
#include <stdio.h>

void find_same_element(int arr1[], int arr2[], int len1, int len2) {
    int i = 0, j = 0;

    for (i = 0;i < len1;i ++) {
        for (j = 0; j < len2; j ++) {
            if (arr1[i] == arr2[j])
                goto found;
        }
    }

    found:
        printf("%d %d\n", i, j);
}

int main() {

    int arr1[] = {1, -5, 8, 6 ,3, 10 ,20, 10};
    int arr2[] = {2, 0, 7, 1 ,1, 80};

    find_same_element(arr1, arr2, sizeof(arr1) / sizeof(int), sizeof(arr2)/ sizeof(int));

    return 0;
}
