/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：test.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月19日
*   Description ：
================================================================*/
#include <stdio.h>

#define LINE abcdkjsdafjasdfj \
    kdsjfsdjf\
    ljsdfljsdlkf

#define dprint(expr) printf(#expr " = %d\n", expr);
#define STR "a"
#define printstr(str) printf(#str "::");
#define paste(front, back) front ## back

#define swap(t,x,y) t temp = x;x = y;y = temp;

void test(void) {
    int nums[10] = {1, 2, 3};
    for (int i = 0; i < 10; i ++) 
        printf("%d\n", nums[i]);;
}

int main() {
    // char pattern[] = {'H', 'e', 'l', 'l', 'o'};
    // printf("%s\n", pattern);
    // printf("%lu\n", sizeof(pattern) / sizeof(char));

    //test();

    // dprint(20/10);
    
    // char s[] = STR;
    // printf("%s\n", s);
    // printf("%lu\n", sizeof(s) / sizeof(char));

    // int age = 200;
    // printf("%d\n", paste(ag, e));

    // int a = 102;
    // int b = 300;
    //
    // swap(int, a, b);
    // printf("%d %d\n", a, b);

    int a;
    printf("%d\n", a);

    return 0;
}
