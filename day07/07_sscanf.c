//
// Created by xuxu on 2023/3/5.
//
#include <stdio.h>
#include <string.h>

int main() {
//从字符串中读取格式化数据,提取数据
    char str[] = "xuxu zhen shuai";
    char str1[10];
    char str2[10];
    char str3[10];
    sscanf(str, "%s %s %s", str1, str2, str3);
    printf("%s,%s,%s\n", str1, str2, str3);


    return 0;
}
