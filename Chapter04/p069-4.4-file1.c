/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p069-4.4-file1.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月27日
*   Description ：
================================================================*/
extern int sp;
extern int val[];

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



