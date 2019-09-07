/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p051-3.5-reverse.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月07日
*   Description ：
================================================================*/
#include <stdio.h>
#include <string.h>

void reverse(char s[]);
int main() {

    char s[] = "Hello, world.";
    printf("%s\n", s);

    reverse(s);
    printf("%s", s);

    return 0;
}


void reverse(char s[]) {
    
    for (int i = 0, j = strlen(s) - 1, temp = '\0'; i < j; i ++, j--) 
        temp = s[i], s[i] = s[j], s[j] = temp;
}
