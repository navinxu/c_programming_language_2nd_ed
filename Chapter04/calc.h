/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：calc.h
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月27日
*   Description ：
================================================================*/
#ifndef CALC
#define CALC
#define NUMBER '0'
#define BUFSIZE 100
#define MAXVAL 100
void push(double);
double pop(void);
int getop(char []);
int getch(void);
void ungetch(int);
#endif
