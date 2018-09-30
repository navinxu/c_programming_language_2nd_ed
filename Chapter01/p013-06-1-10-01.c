/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   文件名称：p012-01.c
*   创 建 者：Navin Xu
*   电子邮箱：admin@navinxu.com
*   创建日期：2018年09月29日
*   描    述： 输出过程中将制表符替换为\t，把回退符替换为\b，把反斜杠替换为//。
================================================================*/
#include <stdio.h>

int main() {


    int c;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            printf("\\t");
        }

        if (c == '\b') {
            printf("\\b");
        }

        if (c == '\\') {
            printf("\\\\");
        }

        if (c != '\t') {
            if (c != '\b') {
                if (c != '\\') {
                    putchar(c);
                }
            }
        }
    }


    return 0;
}

