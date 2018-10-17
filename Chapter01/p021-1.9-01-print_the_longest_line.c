/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：p021-1.9-01.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年10月17日
*   Description ：
================================================================*/
#include <stdio.h>

#define LINEMAX 2000

int mygetline(char line[], int lim);
void mycopy(char from[], char to[]);

int main() {

    char line[LINEMAX], longest[LINEMAX];
    int maxlength = 0, len = 0;

    while ((len = mygetline(line, LINEMAX)) > 0) {
        if (maxlength < len) {
            maxlength = len;
            mycopy(line, longest);
        }
            
    }

    if (maxlength > 0)
        printf("The longest line is : %s\nIt's length is %i", longest, maxlength);
    

    return 0;
}

int mygetline(char line[], int lim) {

    int i;
    char c;

    for (i = 0; (i < lim - 1) && ((c = getchar()) != EOF) && (c != '\n'); i++) {
        line[i] = c;
    }

    if (c == '\n') {
        line[i] = c;
        i++;
    }

    line[i] = '\0';



    return i;
}


void mycopy(char from[], char to[]) {
    
    for (int i = 0; (to[i] = from[i]) != '\0'; i++);
}
