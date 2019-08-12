/*================================================================
 *   Copyright (C) 2018 Navin Xu. All rights reserved.
 *
 *   文件名称：test.c
 *   创 建 者：Navin Xu
 *   电子邮箱：admin@navinxu.com
 *   创建日期：2018年09月29日
 *   描    述：
 ================================================================*/
#include <stdio.h>
#include <string.h>

int get_size(char* str) {
    return strlen(str);
}

int main() {

    char str[] = "abcde";
    printf("%d\n", get_size(str));

    return 0;
}
