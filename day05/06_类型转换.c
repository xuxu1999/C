/*************************************************************************
        > File Name: 06_类型转换.c
        > Author: 徐大帅
        > Mail: 2978615862@qq.com
        > Created Time: 2023年03月03日 星期五 21时10分11秒
 ************************************************************************/

#include <stdio.h>
void test01()
{

    // 隐式类型转换
    double a;
    int b = 10;
    a = b;
    printf("a=%lf\n", a); // a=10.000000
}

void test02()
{

    // 强制类型转换
    double a;
    a = (double)1 / 2;
    printf("a=%lf\n", a);

    printf("sizeof (int) = %u\n", (unsigned int)sizeof(int));
}

void test03(){

    /* char;
    short;
    int;
    long;
    long long;
    float;
    double; */
    int a = 123;
    char b = 111;
    //a = b;
    a = (int)a;

    //大转小
    b = (char)a;
    
    printf("a=%d\n", a);
    printf("b=%d\n", b);
}

void test04(){

    int a = 111;
    //printf("aaaa=%lf", a);
    printf("aaaa=%lf\n",(double) a);

    double b = 123.11;
    //printf("b=%d", b);
    printf("b=%d\n",(int) b);
}
int main()
{
    test01();
    // 小转大不会有问题

    test02();

    test03();

    test04();
    return 0;
}
