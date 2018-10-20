/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：p023-1.10-01.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年10月19日
*   Description ：读取每行文本，找出最长行，并且获取该行的长度
================================================================*/
#include <stdio.h>

#define MAXCOUNT 1000

char line[MAXCOUNT];
char longest[MAXCOUNT];

int maxlength = 0;

int mygetline();
void mycopy();

int main() {


    extern int maxlength;
    extern char longest[];
    int len;

    while ((len = mygetline()) > 0) {
        if (len > maxlength) {
            maxlength = len;
            mycopy();
        }
    }

    if (maxlength > 0)
        printf("%d, %s", maxlength, longest);

    return 0;
}

int mygetline() {

    extern char line[];
    
    
    int i, c;
    line[0] = '\0';
    for (i = 0; (i < MAXCOUNT - 1) && ((c = getchar()) != EOF) && (c != '\n'); i++)
        line[i]  = c;

    if (c == '\n') {
        line[i] = c;
        i++;
    }

    line[i] = '\0';

    return i;
}

void mycopy() {

    extern char line[];
    extern char longest[];
    
    int i = 0;

    for (; i < sizeof(line); i ++) {
        longest[i] = line[i];
    }



}
