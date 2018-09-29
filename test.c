/*================================================================
 *   Copyright (C) 2018 Navin Xu. All rights reserved.
 *
 *   文件名称：test.c
 *   创 建 者：Navin Xu
 *   电子邮箱：admin@navinxu.com
 *   创建日期：2018年09月29日
 *   描    述：
 ================================================================*/
#include<stdio.h>
#include<curses.h>

int main(){
char str[20],c=' ';
int i=0;
printf("\n Enter the password [max length 10] : ");
while (i<=9){
    str[i]=getch();
    c=str[i];
    if(c==13) break;
    else printf("*");
    i++;
}
str[i]='\0';
i=0;
printf("\n");
printf("\n Your password is : %s",str);
return 0;
}
