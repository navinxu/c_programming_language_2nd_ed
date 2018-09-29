/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   文件名称：p012-01.c
*   创 建 者：Navin Xu
*   电子邮箱：admin@navinxu.com
*   创建日期：2018年09月29日
*   描    述：单词计数程序(wc命令的核心代码)
================================================================*/
#include <stdio.h>

#define OUT 0
#define IN 1

int main() {

    int state, c, nc, nw, nl;
    nc = nw = nl = 0;
    
    state = OUT;

    while ((c = getchar()) != '\n') {
        if (c == '\n') {
            nl ++;
        }

        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            nw++;
        }

        nc ++;
    }

    printf("nc = %d, nw = %d, nl = %d\n", nc, nw, nl);


    return 0;
}

