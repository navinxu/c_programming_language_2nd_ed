/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p053-3.6-ex3-6-itob.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月11日
*   Description ：
================================================================*/
#include <stdio.h>
#include <string.h>

void itob(int num, char s[], int b);
int main() {

    char s[1000];
    itob(9, s, 8);
    printf("%s\n", s);


    return 0;
}

void reverse(char s[]) {

    if (strlen(s) == 1) {
        return;
    }
    unsigned long int begin, end;
    int temp;
    for (begin = 0, end = strlen(s) - 1; begin <= end; begin ++, end --) {
        temp = s[begin];
        s[begin] = s[end];
        s[end] = temp;
    }

    s[strlen(s)] = '\0';
}

void itob(int num, char s[], int b) {
    int remainder; 
    int i = 0;
    switch (b) {
        case 8:
            do {
                remainder = num % b;
                s[i++] = remainder + '0';
            } while (num /= 8);
            break;
        case 12:
            do {
                remainder = num % b;
                if (remainder < 10)
                    s[i++] = remainder + '0';
                else
                    s[i ++] = remainder - 10 + 'A';
            } while (num /= 12);
            break;
        case 16:
        default:
            do {
                remainder = num % b;
                if (remainder < 10)
                    s[i ++] = remainder + '0';
                else {
                    s[i ++] = remainder - 10 + 'A';
                }
            } while (num /= b);
            break;
    }

    s[i] ='\0';

    reverse(s);
}
