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

enum seven_days {
    SUN,
    MON,
    TUE,
    WEB,
    THU,
    THR,
    SAT
};

int main() {

    enum seven_days days;
    days = MON;
    printf("%d\n", days);



    return 0;
}
