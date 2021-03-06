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
        switch (c) {
            case '\t':
                printf("\\t");
                break;
            case '\b':
                printf("\\b");
                break;
            case '\\':
                printf("\\\\");
                break;
            default:
                putchar(c);
                break;
        }
    }



    return 0;
}

