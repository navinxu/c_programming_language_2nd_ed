/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p052-3.6-itoa.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月10日
*   Description ：
================================================================*/
#include <string.h>
#include <stdio.h>
void reverse(char s[]) {
    unsigned long int len = strlen(s);
    unsigned long int index;
    unsigned long int i;

    if (len == 1)
        return;

    char temp;
    for (i = 0, index = len - 1; i <= index; i ++, index --) {
        temp = s[i];
        s[i] = s[index];
        s[index] = temp;
    }      
    // 4201 

    s[len] = '\0';

}

void itoa(int num, char s[]) {
    int sign, i;

    if ((sign = num) < 0)
        num = -num;

    i = 0;
    do {
        s[i++] = num % 10 + '0';
    } while ((num /= 10) > 0);

    if (sign < 0) 
        s[i++] = '-';
    s[i] = '\0';

    //printf("%s\n", s);
    //return;
    reverse(s);


}


int main() {

    char s[1000];
    itoa(2, s);
    printf("%s\n", s);

    return 0;
}
