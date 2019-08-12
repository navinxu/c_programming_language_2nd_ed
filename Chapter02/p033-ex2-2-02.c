/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p033-ex2-2-02.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月12日
*   Description ：
================================================================*/
#include <stdio.h>

#define MAX_COL 2000

int main() {

    char str[MAX_COL + 1];
    int col_count = 0;
    char c;
    char out_of_range = 0;

    while (1) {
        if (col_count == MAX_COL)
            out_of_range = 1;
        else if ((c = getchar()) == '\n')
            out_of_range = 1;
        else if (c == EOF)
            out_of_range = 1;
        else {
            str[col_count] = c;
            col_count ++;
        }

        if (out_of_range) {
            str[col_count] = '\0';
            break;
        }
    }

    printf("%s\n", str);

    return 0;
}
