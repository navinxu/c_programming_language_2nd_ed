/*================================================================
 *   Copyright (C) 2018 Navin Xu. All rights reserved.
 *
 *   文件名称：p004-01.c
 *   创 建 者：Navin Xu
 *   电子邮箱：admin@navinxu.com
 *   创建日期：2018年09月28日
 *   描    述：
 ================================================================*/
#include <stdio.h>
#include <curses.h>

#define MAX_PWD_COUNT 32


int main() {



    int c,i;
    char pwd_input[MAX_PWD_COUNT + 1];

    i = 0;
    while ((c = getch()) != char(13)) {
        pwd_input[i] = c;
        putchar('*');
        i++;
        if (i > MAX_PWD_COUNT)
            break;
    }

    pwd_input[i + 1] = '\0';

    printf("Password is : %s\n", pwd_input);

    return 0;
}
