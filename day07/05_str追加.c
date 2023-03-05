/*************************************************************************
        > File Name: 04_str追加.c
        > Author: 徐大帅
        > Mail: 2978615862@qq.com
        > Created Time: 2023年03月05日 星期日 20时11分04秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
// strcat()
void test01() {
    char str1[20] = " hello xuxu";
    char str2[100] = "aaaaaaaaaaaaaaa";
    strcat(str2, str1);
    printf("%s\n", str2);
    printf("%lu\n", sizeof(str2));
}

//strncat()
void test02(){
    char str1[20] = " hello xuxu";
    char str2[100] = "aaaaaaaaaaaaaaa";

    strncat(str2,str1,6);
    printf("%s\n",str2);




}
int main() {

    //test01();
    test02();
    return 0;
}
