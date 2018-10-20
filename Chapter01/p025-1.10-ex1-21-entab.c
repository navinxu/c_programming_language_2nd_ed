/*================================================================
*   Copyright (C) 2017 Navin Xu. All rights reserved.
*   
*   Filename    ：p025-1.10-ex1-20.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年10月20日
*   Description ：用固定宽度的制表符替换空格 
================================================================*/
#include <stdio.h>

#define TAB_WIDTH 4 // 制表符的宽度
#define MAXLINE 2048 // 最大输入长度

int mygetline(char line[]);
void tab_replace_space(char input[], char output[]);

int main() {

    char line[MAXLINE], output[MAXLINE];

    //tab_replace_space(output);
	while (mygetline(line)) {
		printf("%s", line);
		tab_replace_space(line, output);
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

void tab_replace_space(char input[], char output[]) {

	char c = (* input);
	unsigned short in_space = 0;


	while (c != '\0') {
		if (c == ' ') {

			in_space ++;

			if (in_space == TAB_WIDTH) {
				for (int i = 0; i < TAB_WIDTH - 1; i++) {
					output --;	
				}

				(* output) = '\t';

				in_space = 0;
			}  else 
				(* output) = c;
		} else {
			if (in_space > 0)
				in_space = 0;

			(* output) = c;
		}
		input ++;
		output ++;
		c = (* input);
	}

	(* output) = '\0';
}

