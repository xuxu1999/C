#include <stdio.h>
#include <stdlib.h>
int main()
{

    /*

    栈（stack）区：

    堆（heap）区: 手动申请，手动释放，不释放，程序结束释放

     */

    // 栈越界 段错误，就是内存出问题了
    // int a[100000000] = {0};

    int *p = (int *)malloc(100000000000000 * sizeof(int));
    if (p == NULL)
    {
        printf("分配内存失败\n");
    }
    

    return 0;
}