/*************************************************************************
        > File Name: 05_sizeof.c
        > Author: 徐大帅
        > Mail: 2978615862@qq.com
        > Created Time: 2023年03月03日 星期五 16时21分59秒
 ************************************************************************/

#include <stdio.h>
int main(){

int a=10;

//unsighed int size_t
size_t num = sizeof a;

printf("%d\n",num);

return 0;
}
