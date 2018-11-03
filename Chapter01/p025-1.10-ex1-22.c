/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：p025-1.10-ex1-22.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年10月31日
*   Description ： 将较长的输入行折断为两行或多行，要求指定的列前
*               没有空格
================================================================*/
#include <stdio.h>

#define MAXLINE 2000
#define MAX_COLUMN 19

int mygetline(char line[], int maxline);
void make_newline(char input[], char output[], int max_column);

int main() {

    int len, newline_len;
    char line[MAXLINE];

    newline_len = 0;
    len = 0;
    while ((len = mygetline(line, MAXLINE)) > 0) {
        //printf("%d, %s", len, line);
        if (len % (2 * MAX_COLUMN) == 0) 
            newline_len = MAXLINE + len / MAX_COLUMN - 1;
        else
            newline_len = MAXLINE + len / MAX_COLUMN;

        char newline[newline_len];
        make_newline(line, newline, MAX_COLUMN);
        printf("%s", newline);
    }
    printf("++");


    return 0;
}


int mygetline(char line[], int maxline) {
    int c, i;

    for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;

    if (i ==  maxline - 1)
        while ((c = getchar()) != '\n');

    if (c == '\n') {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';
    return i;
}

void make_newline(char input[], char output[], int max_column) {
    int i;

    for (i = 1; ((* input) != '\0') && ((* output) = (* input)); i++, input ++, output ++) {

        if (i % max_column == 0) {
            output ++;
            (* output) = '\n';             
            
            input ++;
            if ((* input) == ' ') {
                char space = 0;
                while ((* input) == ' ') {
                    input ++;
                    space = 1;
                }

                if (space)
                    input --;
            } else {
                input --;
            }
        }
    }

    (* output) = (* input);
}
