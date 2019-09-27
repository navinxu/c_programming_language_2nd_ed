/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：main.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月27日
*   Description ：
================================================================*/
#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
#define MAXOP 100

int main() {

    int type;
    double op2;
    char s[MAXOP];

    while ((type = getop(s)) != EOF) {
        //printf("%s\n", s);
        //continue;
        switch (type) {
            case NUMBER:
                push(atof(s));
                break;
            case '+':
                push(pop() + pop());
                break;
            case '*':
                push(pop() * pop());
                break;
            case '-':
                op2 = pop();
                push(pop() - op2);
                break;
            case '/':
                op2 = pop();
                if (op2 == 0.0)
                    printf("Error: zero dvisor\n");
                else
                    push(pop() / op2);
                break;
            case '\n':
                printf("\t%.8g\n", pop());
                break;
            default:
                printf("error: unknown command %s\n", s);
                break;
        }
    }

    return 0;
}


