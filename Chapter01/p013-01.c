/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   文件名称：p012-01.c
*   创 建 者：Navin Xu
*   电子邮箱：admin@navinxu.com
*   创建日期：2018年09月29日
*   描    述：
================================================================*/
#include <stdio.h>

int main() {

    int c, nl;
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            nl++;
        if (c == '|')
            break;
    }

    printf("%i", nl);
    return 0;
}

