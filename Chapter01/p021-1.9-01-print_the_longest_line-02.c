/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：p023-1.10-01-getline.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年10月18日
*   Description ：
================================================================*/
#include <stdio.h>

int mygetline(char line[], int maxlength);
void mycopy(char from[], char to[]);

int main() {

    const int MAXLENGTH = 2048;

    char line[MAXLENGTH], maxline[MAXLENGTH];
    int maxlinelen = 0, linelength = 0;
    while ((linelength = mygetline(line, MAXLENGTH))) {
        if (linelength > maxlinelen) {
            maxlinelen = linelength;
            mycopy(line, maxline);
        }
    }

    printf("The longest line is: %s\n It's length is %i", maxline, maxlinelen);

    return 0;
}

int mygetline(char line[], int maxlength) {
    char c;

    int i;
    for (i = 0; (i < maxlength - 1) && ((c = getchar()) != EOF) && (c != '\n'); i++)
        line[i] = c; 
    if (c == '\n') {
        line[i] = c;
        i++;
    }

    line[i] = '\0';
    
    return i;
}

void mycopy(char from[], char to[])  {
    for (int i = 0; (to[i] = from[i]) != '\0'; i++);

}
