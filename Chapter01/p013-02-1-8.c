/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   文件名称：p012-01.c
*   创 建 者：Navin Xu
*   电子邮箱：admin@navinxu.com
*   创建日期：2018年09月29日
*   描    述： 统计空格
================================================================*/
#include <stdio.h>

int main() {

    long ns;
    for (ns = 0; getchar() != EOF; ns++)
        ;
    printf("%ld\n", ns);


    return 0;
}

