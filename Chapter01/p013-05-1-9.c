/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   文件名称：p012-01.c
*   创 建 者：Navin Xu
*   电子邮箱：admin@navinxu.com
*   创建日期：2018年09月29日
*   描    述： 输出过程中将其中连续的多个空格用一个空格代替
================================================================*/
#include <stdio.h>

int main() {

    int c, space;
    space = 0;
    while ((c = getchar()) != '\n') {
        if (c != ' ') {
            space = 0;
            putchar(c);

        } else  {
            space++;
        }

        if (space == 1)
            putchar(c);

    }



    return 0;
}

