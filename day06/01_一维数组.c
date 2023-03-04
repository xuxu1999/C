//
// Created by xuxu on 2023/3/4.
//
#include <stdio.h>

void test01() {

    //int array;
    int array[10];

    //初始化
    //array = {0};

    for (int i = 0; i < 10; i++) {
        array[i] = i + 1;
        printf("%d\n", array[i]);
    }

}

//數組初始化
void test02() {
    int a1[5] = {1, 2, 3, 4, 5};
    //int a2[];
    //a2={123}; err 數組名是常量,不能修改
    int a3[10] = {1, 2, 3};
    for (int i = 0; i < sizeof(a3) / sizeof(a3[0]); ++i) {
        printf("%2d", a3[i]);
    }
}

//不初始化的數組值？隨機數
void test03() {
    int aa[10];
    for (int i = 0; i < sizeof(aa) / sizeof(aa[0]); i++) {
        printf("%-2d", aa[i]);
    }
}

//數組名：一個常量（地址），首元素地址
void test04() {


    int a[10] = {0};
    printf("a= %p , a[0]= %p\n", &a, &a[0]);
    printf("%d\n", (int) sizeof a);
    /*
     *  a= 0x7ffe91bb6000 , a[0]= 0x7ffe91bb6000
        40
     */
}

//3個數最值
int test05() {
    int a, b, c;
    scanf("%d,%d,%d", &a, &b, &c);
    //(a > b ?: a:b) 兩數最大的那個,當成一個整體 max
    // max>c?max:c;
    return (a > b ? a : b) > c ? (a > b ? a : b) : c;

}

//四數最大值,同test05，一步步分解
int test06() {
    int a, b, c, d;
    scanf("%d,%d,%d,%d", &a, &b, &c, &d);
    //可讀性很差
    return ((a > b ? a : b) > c ? (a > b ? a : b) : c) > d ? ((a > b ? a : b) > c ? (a > b ? a : b) : c) : d;
}

//數組最值
int test07() {
    int a[10] = {12, 1, 5335, 253, 235, 12, 12, 14125, 21, 1241};
    int max = a[0];
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); ++i) {
        if (a[i] >= max) {
            max = a[i];
        }
    }
    return max;
}

//數組翻轉
void test08() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int temp = 0;
    int i = 0;
    int j = (sizeof(a) / sizeof(a[0]) - 1);
    for (; i < j; ++i, --j) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        printf("%-3d", a[i]);
    }
    //printf("%d,%d",i,j);
    printf("\n");
}

void test09() {
    int a[] = {1, -2, 3, -4, 5, -6, 7, -8, -9, 10};//定义一个数组，同时初始化所有成员变量

    int i = 0;
    int j = sizeof(a) / sizeof(a[0]) - 1;
    int tmp;

    while (i < j) {
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
        i++;
        j--;
    }

    for (i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

}


//冒泡排序,比較n-1趟
void BubbleSort() {
    int a[10] = {12, 1, 5335, 253, 235, 12, 12, 14125, 21, 1241};
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < sizeof(a) / sizeof(a[0]); ++i) {
        printf("%d  ", a[i]);
    }
    printf("\n");

}

//二維數組
void array_2d() {
    //定義
    //int a[3][4];

    //賦值
//    a={
//            {1,2,3,4},
//            {0,0,0,0},
//            {6,7,8,9}
//    }; err

//第一種寫法
    int b[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int a[3][4] = {
            {1, 2, 3, 4},
            {0, 0, 0, 0},
            {6, 7, 8, 9}
    };
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    /*printf("數組大小:%d\n", (int) sizeof(b));//所佔字節數
    printf("數組行數:%d\n", (int) sizeof(b) / sizeof(b[0]));
    printf("數組列數:%d\n", (int) sizeof(b[0]) / sizeof(a[0][0]));
*/
}

//多維數組
void test10() {
    int a[3][4][5] = {
            {
                    {1, 2, 3, 4, 5},
                    {1, 2, 3, 4, 5},
                    {1, 2, 3, 4, 5},
                    {1, 2, 3, 4, 5}
            },
            {
                    {1, 2, 3, 4, 5},
                    {1, 2, 3, 4, 5},
                    {1, 2, 3, 4, 5},
                    {1, 2, 3, 4, 5}
            },
            {
                    {1, 2, 3, 4, 5},
                    {1, 2, 3, 4, 5},
                    {1, 2, 3, 4, 5},
                    {1, 2, 3, 4, 5}
            }
    };
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            for (int k = 0; k < 5; ++k) {
                printf("%2d", a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    //測試一下偏移量 這裡類型有問題，指針類型
    //int *pInt[3][4][5]=a;
//    printf("%d\n",pInt);
//    pInt++;//偏移一個二維數組
//    printf("%d\n",pInt);
//    int *pInt1[4][5]=&a[1];
//    printf("%d\n",pInt1);
    printf("%d\n", &a);
    printf("%d\n", &a[1]);
//-56654320
//-56654240 偏移80 ,4*5*4

}

//字符數組
void test11() {
    char a[3] = {'a', 'b', 'c'};//字符數組
    char str[10] = {'a', 'b', 'c', 'd', '\0'};//字符串
    char str1[10] = {'x', 'u', 'x', 'u', 0};//字符串
    //printf("%s\n",a);err 下面的寫法才可以
    for (int i = 0; i < 3; ++i) {
        putchar(a[i]);
    }
    printf("\n");

    printf("str: %s\n", str);
    printf("str1: %s\n", str1);

    char str3[] = "xudashuai";//用這個初始化字符串
    printf("str3: %s\n", str3);
    printf("%lu\n", sizeof str3);//10,不包括結尾的\0

    char str4[] = "\0abc";
    printf("str4:%s\n", str4);//空串
    char str5[] = "\\0abc";
    printf("str5:%s\n", str5);//    str5:\0abc

    //1、常用的初始化，使用字符串初始化，在字符串结尾自动加结束符数字0
    //2、这个结束符，用户看不到（隐藏），但是是存在的
    //\0后面最后别跟数字，有可能组成一个转移字符， '\012'就是'\n'
    char a10[] = "\012abc";
    printf("a10 = %s\n", a10);
}

//字符串輸入
void InputStr(){
    //給一個足夠的緩衝區
    char str[100];
    scanf("%s",str);
    printf("%s\n",str);
}

int main() {

    // test04();
    //printf("%d\n",test05());
    //printf("%d\n",test06());
    //printf("%d\n",test07());
    //test08();
    //BubbleSort();
    //array_2d();
    //test10();
    //test11();
    InputStr();
    return 0;
}
