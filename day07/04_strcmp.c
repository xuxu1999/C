//
// Created by xuxu on 2023/3/5.
//
#include <stdio.h>
#include <string.h>

int main() {

    char str1[] = "abc";
    char str2[] = "bcds";
    int flag = strcmp(str1, str2);
    if(flag>0){
        printf("大于\n");
    } else if (flag==0){
        printf("相等\n");
    } else{
        printf("小于\n");
    }

    return 0;
}
