/*================================================================
*   Copyright (C) 2017 Navin Xu. All rights reserved.
*   
*   Filename    ：p025-1.10-ex1-20.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年10月20日
*   Description ：用空格替换固定宽度的制表键
================================================================*/
#include <stdio.h>

#define TAB_WIDTH 4 // 制表符的宽度
#define MAXLINE 2048 // 最大输入长度

int mygetline(char line[]);
void space_replace_tab(char input[], char output[]);
int get_line_tab_amount(char input[]);

int main() {

    char line[MAXLINE];

    //space_replace_tab(output);
	int amount = 0;
	while (mygetline(line)) {
		printf("%s", line);
		amount = get_line_tab_amount(line);
		char output[MAXLINE + (amount * TAB_WIDTH)];
		space_replace_tab(line, output);
		printf("%s", output);
	}
	
    return 0;
}

int mygetline(char line[]) {

	char c;
	int i = 0;

	while ((i < MAXLINE) && ((c = getchar()) != EOF) && (c != '\n')) {
		line[i] = c;
		i ++;
	}

	if (c == '\n') {
		line[i] = c;
		i ++;
	}

	line[i] = '\0';

	return i;
}

void space_replace_tab(char input[], char output[]) {

	char c = (* input);
	while (c != '\0') {
		if (c == '\t') {
			for (int i = 0; i < TAB_WIDTH; i++) {
				(* output) = ' ';
				output ++;

				if (i == TAB_WIDTH - 1) {
					input ++;
					c = (* input);
				}
			}
		} else {
			(* output) = c;
			input ++;
			c = (* input);
			output ++;
		}
	}

	(* output) = '\0';
}

int get_line_tab_amount(char input[]) {
	int count = 0;
	while ((* input) != '\0') {
		if ((*input) == '\t')
			count ++;
		input ++;	
	}

	return count;
}
