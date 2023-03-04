#include<stdio.h>
int main(){

   while (1)
   {
    /* code */
    printf("请输入一个数\n");
    int a = 0;
    scanf("%d", &a);
    if (a < 0)
        printf("负数\n");
    else if (a > 0)
        printf("正数\n");
    else
        printf("此数为0");
    if (a == 0)
        break;
   }
   

        return 0;
}