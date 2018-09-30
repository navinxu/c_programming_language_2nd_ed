/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   文件名称：p012-01.c
*   创 建 者：Navin Xu
*   电子邮箱：admin@navinxu.com
*   创建日期：2018年09月29日
*   描    述：以每行一个单词的形式打印其输入
================================================================*/
#include <stdio.h>

#define IN 1
#define OUT 0

int main() {

    int state, c;
    state = OUT;

    while ((c = getchar()) != EOF) {

        if (c == ' ' || c == '\t' || c == '\n') {
            if (state == IN) {
                putchar('\n');
            }
            state = OUT;
        }
        else if (state == OUT) {
            state = IN;
        }
        
        if (state == IN)
            putchar(c);
    }

    return 0;
}
