/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p033-ex2-2.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月12日
*   Description ：
================================================================*/
#include <stdio.h>

#define MAX_LINE 2000

int main() {

    int c;
    char str[MAX_LINE + 1];
    int count = 0;
    char out_of_range = 0;
    while (1) {

        if (count < MAX_LINE) {

            c = getchar();
            if (c != '\n')
                if (c != EOF) {
                    str[count] = c;
                    count ++;
                }
        } else {
            out_of_range = 1;
        }

        if (c == '\n') 
            out_of_range = 1;

        if (c == EOF)
            out_of_range = 0;

        if (out_of_range) {
            str[count] = '\0';
            break;
        }
    }

    printf("%s\n", str);

    return 0;
}
