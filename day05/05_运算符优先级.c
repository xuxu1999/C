#include<stdio.h>
int main(){

    int c = 0;
    // 1 || c = 250; 1 = 250;错误
    1 || (c = 250);//短路，前真后不执行，编译器优化

    printf("%d\n", c);

    0 || (c = 250);
    printf("%d\n", c);
    return 0;
}