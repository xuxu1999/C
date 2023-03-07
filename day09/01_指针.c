#include <stdio.h>
// 指针数组,是一个数组，数组中每个元素都是指针
void test01()
{

    int a[5] = {1, 2, 3, 4, 5};
    int *p[5];
    for (int i = 0; i < 5; i++)
    {
        /* code */
        p[i] = &a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("%d\t", *p[i]);
    }
    printf("\n");
}


int main()
{
    test01();
    return 0;
}