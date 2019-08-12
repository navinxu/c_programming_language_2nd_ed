/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p037-ex2-3-hexstring_to_int.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月13日
*   Description ：
================================================================*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int hexstr_to_int(const char* hex) {
    int result = 0;
    unsigned int i = 0;
    int len = strlen(hex);
    // 可能是负数
    signed char negative = 1;
    if (len >= 1) {

        char c;
        // 去除前面的空格
        // 如果进入循环，
        // 那么出去时 i 指向空格的下一个字符
        while ((c = hex[i]) == ' ' && c != '\0') {
            i++;
        }

        // 去除负号
        if (hex[i] == '-') {
            i ++;
            negative = -1;
        }

        if (len - i >= 2) {
            if (hex[i] == '0' && (hex[i + 1] == 'x' || hex[i + 1] == 'X')) {
                i = i + 2;
            } else if (hex[i] == '0' && hex[i + 1] != 'x' && hex[i + 1] != 'X')
                // 排除以 0 开头，第二个字不是 x 或 X 的字符串
                return 0;
        }

        if (hex[i] == '\0')
            return 0;

        for (; i < len; i++) {
            if (isdigit(hex[i]))
                result = 16 * result + hex[i] - '0';
            else if (hex[i] >= 'a' && hex[i] <= 'f')
                result = 16 * result + hex[i] - 'a' + 10;
            else if (hex[i] >= 'A' && hex[i] <= 'F')
                result = 16 * result + hex[i] - 'A' + 10;
            else
                return negative * result;
        }

        return negative * result;
    } else
        return 0;
}

int main() {

    char *hex_str = "    -0x1cD9f ";
    //char *hex_str = "   0x2";

    printf("%d\n", hexstr_to_int(hex_str));

    return 0;
}
