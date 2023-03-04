#include<stdio.h>
void test01(){
    int i = 0;
    int j = 0;
    for ( i = 0; i < 10;i++){
        for ( j = 0; j < 10;j++){

            if(j==5){
                break;//跳出内层循环
            }
            printf("i=%d, j=%d\n",i,j);
        }
    }
}

void test02(){
for (int i = 0; i < 10; i++)
{
    if(i==5){
        break;
    }
    printf("%-2d", i);
}
printf("\n");
}
int main(){
    test01();
    printf("-----------\n");
    test02();
    // break 跳出最近匹配的循环
    
    return 0;
}