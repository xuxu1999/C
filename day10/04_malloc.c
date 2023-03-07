#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    p=(int *)malloc(sizeof(int));//返回void*,要类型转换

    if(p==NULL){
        printf("内存分配失败\n");
    }
    *p = 97;
    putc(*p, stdout);
    // 用完要释放,这一步很重要
    //free(p);
    if(p!=NULL){
        free(p);
        p = NULL;
    }

    return 0;
}



















