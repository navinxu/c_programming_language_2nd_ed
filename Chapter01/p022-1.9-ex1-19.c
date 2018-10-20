/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：p022-1.9-ex1-1-19.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年10月18日
*   Description ：编写函数 reverse(s)，将字符串s中的字符顺序颠倒过来。
================================================================*/
#include <stdio.h>

void reverse(char origin[], char res[]);

int main() {

    char str[] = "abcdefg";
    printf("Origin string: %s\n", str);

    char res[sizeof(str)];

    reverse(str, res);

    printf("Reverse string: %s", res);


    return 0;
}


void reverse(char origin[], char res[]) {
    
    char * tmp = origin;

    while ((* origin) != '\0')
        origin ++;

    origin --;

    //printf("=%c\n", *origin);
    
    while (origin != tmp) {
        (* res) = (* origin);
        res ++;
        origin --;
    }
    
    (* res) = (* origin);

    res ++;

    (* res) = '\0';
}
