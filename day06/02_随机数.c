//
// Created by xuxu on 2023/3/4.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void test01() {
    //srand(100);//种子一样，每次运行的随机数也一样

    srand((unsigned int) time(NULL));
    int num = 0;
    for (int i = 0; i < 10; ++i) {
        num = rand();
        printf("%d\n", num);
    }
}

//生成指定范围的随机数,执行太快,打印的都一样
void test02() {
    srand((unsigned int) time(NULL));
    float num = 0;
    //num = rand() % 3;//0-2
    num =rand()%10;//0-9
    for (int i = 0; i < 5000; i++) {
        printf("%f\t", num);
        if(i%10==0){
            printf("\n");
        }
    }
}

int main() {

    test02();
    return 0;
}