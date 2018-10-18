/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：p022-1.9-ex-18.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年10月18日
*   Description ： 删除每行的空格及制表符，并删除完全是空格的行
================================================================*/
#include <stdio.h>

const int MAXLENGTH = 2048;

char mygetline(char line[], int maxlength);
void rstrip_space(char line[], char res_line[]);

int main() {


    char line[MAXLENGTH], space_str[MAXLENGTH];

    while (mygetline(line, MAXLENGTH)) {
        rstrip_space(line, space_str); 
        printf("%s", space_str);
        //printf("====\n%s", space_str);
        //printf("++++\n%s", line);
    }

    return 0;
}

char mygetline(char line[], int maxlength) {
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

void rstrip_space(char line[], char res_line[]) {
    unsigned int end_of_line_space = 0, space_cnt = 0, other_char = 0;

    char c;
    for (int i = 0; (i < MAXLENGTH) && ((c = line[i]) != '\0'); i++) {
        if ((c == ' ') || (c == '\t')) {
            end_of_line_space = 1;
            space_cnt++;
        } else if (c != '\n') {
            end_of_line_space = 0;
            space_cnt = 0;
        }

		if (c != '\n') {
            res_line[i] = c;
			other_char = 1;
		}


        if (c == '\n') {
			if (0 == other_char) {
				res_line[0] = '\0';
				break;
			}

            if (0 == end_of_line_space) {
                res_line[i] = c;
                res_line[i + 1] = '\0';
            } else {
                res_line[i - space_cnt] = c;
                res_line[i - space_cnt + 1] = '\0';
            }
        }
    }
}
