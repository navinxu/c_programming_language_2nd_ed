/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：P064-calculator.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月24日
*   Description ：
================================================================*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define NUMBER '0'
#define MAXOP 100
#define MAXVAL 100
int sp = 0;
double val[MAXVAL];

int getop(char []);
void push(double);
double pop(void);

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

void push(double f) {
    if (sp < MAXVAL) 
        val[sp++] = f;
    else
        printf("error: stack full, can't push %g\n", f);
}

double pop(void) {
    if (sp > 0)
        return val[--sp];
    else {
        printf("error: statck empty\n");
        return 0.0;
    }

}

int getop(char s[]) {
    int i, c;

    while ((s[0] = c = getchar()) == ' ' || c == '\t')
        ;
    s[1] = '\0';
    if (!isdigit(c) && c != '.')
        return c;
    i = 0;
    if (isdigit(c))
        while (isdigit(s[++i] = c = getchar()))
            ;
    if (c == '.')
        while (isdigit(s[++i] = c= getchar()))
            ;
    s[i] = '\0';
    if (c != EOF)
        ungetc(c, stdin);
    return NUMBER;

}
