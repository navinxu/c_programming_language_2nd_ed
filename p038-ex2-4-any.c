/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p038-ex2-4-any.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月21日
*   Description ：
================================================================*/
#include <stdio.h>

int any(const char s1[], const char s2[]) {

    int i = 0, j = 0;
    char c;

    for (;s1[i] != '\0'; i ++) {
        c = '\0';
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                c = s2[j];
                break;
            }
        }

        if (c != '\0')
            return i;
    }

    return -1; 
}

int main() {

    char s1[] = "Hello World.";
    char s2[] = "skvhfjovibw";
    char s3[] = "skvhf";
    printf("Source of s1 is: %s\n", s1);
    printf("s2 is: %s\n", s2);
    printf("s3 is: %s\n", s3);
    printf("Any of s1 and s2: %d\n", any(s1, s2));
    printf("Any of s1 and s3: %d\n", any(s1, s3));


    return 0;
}
