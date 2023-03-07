#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// memset
/*
void *memset(void *s, int c, size_t n);
功能：将s的内存区域的前n个字节以参数c填入
初始化置零
 */
void test01()
{

    int num[10] = {0};
    // 中间参数虽然是整型，但是以字符处理
    memset(num, 97, sizeof(num));
    for (int i = 0; i < sizeof(num) / sizeof(*num); i++)
    {
        printf("%c\n", *(num + i));
    }
    int a[10];
    memset(a, 98, sizeof(a));
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        /* code */
        putchar(*(a + i));
        if (i == sizeof(a) / sizeof(*a) - 1)
        {
            putchar('\n');
        }
    }
}

// memcpy()
void test02()
{

    char p[] = "hello\0xuxu"; // 字符串初始化，默认隐藏一个结束符\0
    char buf[100];
    printf("sizeof(p)=%lu\n", sizeof p); // 11
    strncpy(buf, p, sizeof(p));
    printf("%s\n", buf);                              // hello
    printf("buf2 = %s\n", buf + strlen("hello") + 1); // 空串

    memset(buf, 0, sizeof(buf)); // 置零
    memcpy(buf, p, sizeof(p));
    printf("%s\n", buf); // hello
    printf("buf2 = %s\n", buf + strlen("hello") + 1);
}

// memmove() 同memcpy()都是拷贝，只不过memmove()可以内存重叠
// 遇到内存重叠拷贝用memmove()
void test03() {

    int a[10] = {0};
    memset(a, 0, sizeof(a));
    //上面等价写法


    int b[10];

    memcpy(b, a, sizeof(a));
    memcpy(b, a, 10 * sizeof(int));
    //等价写法

    //遇到内存重叠,
    //memcpy(&a[2], a, 5 * sizeof(int));//err
    memmove(&a[2], a, 6 * sizeof(int));
    
}

// memcmy() 比较，通常比较是否一样
void test04()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int flag = memcmp(a, b, sizeof(a));
    if(flag<0){
        printf("a<b\n");
    }else if (flag ==0)
    {
        /* code */
        printf("a=b\n");
    }else{
        printf("a>b\n");
    }
}

int main()
{
    // test01();
   // test02();
   // test03();
    test04();
    return 0;
}