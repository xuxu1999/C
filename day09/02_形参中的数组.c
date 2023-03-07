#include<stdio.h>
/*

形参中的数组不是数组
void printArr(int a[])
void printArr(int a[10000])
void printArr(int *a)

形参中的数组是指针变量，要用数组作形参一定要传数组长度n
void printArr(int *a,int n)
 */
void printArr(int *a,int n){

    //int n = sizeof(a) / sizeof(*a);
    //printf("%d\n", n);//2
    for (int i = 0; i < n; i++)
    {
        printf("%4d", *(a + i));
        if(i==(n-1)){
            printf("\n");
        }
    }
    
}

int main()
{
    int a[10] = {-2, 3, 1, 2, 34, 54, 21, 34, 13, 54};
    //冒泡排序
    for (int  i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10-i-1; j++)
        {
            /* code */
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        
    }
    /* for (int i = 0; i < sizeof(a)/sizeof(*a); i++)
    {
        printf("%4d", *(a + i));
        if(i==9){
            printf("\n");
        }
    } */

    //printArr(a);

    printArr(a, sizeof(a) / sizeof(*a));
    return 0;
}