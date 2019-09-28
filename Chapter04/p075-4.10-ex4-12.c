/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p075-4.10-ex4-12.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月27日
*   Description ：
================================================================*/
#include <stdio.h>

#define MAXLEN 100

void itoa(int, char[]);

int main() {

    char s[MAXLEN];
    itoa(-1708, s);
    printf("%s", s);
    
    //int i = 0;
    //do {
    //    printf("%c", s[i++]);
    //}while (s[i] != '\0');
    //printf("%c", s[i]);
    //printf("END");

    return 0;
}

void itoa(int inum, char s[]) {
    static int index = 0;

    static unsigned char flag = 1;
    int temp = inum;
    static int count = 0;
    if (inum < 0) {
        while (temp > 0) {
            temp /= 10;
            ++ count;
        }
        s[index++] = '-';
        flag = 0;
        inum = -inum;
    } else {
        if (flag) {
            while (temp > 0) {
                temp /= 10;
                ++ count;
            }
            flag = 0;
        }
    }

    if (inum / 10)
        itoa(inum / 10, s);
    s[index++] = inum % 10 + '0';
    //printf("%d %d\n", index, count);
    if (index == count)
        s[index] = '\0';
}

