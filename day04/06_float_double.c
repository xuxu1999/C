#include<stdio.h>
int main(){

    float a = 3.14f;
    double b = 3.14;

    printf("%f\n", a);
    printf("%lf\n", b);

    //科学计数法
    float c = 3.14e3f;
    double d = 10000e-5;

    printf("%f,%lf\n", c, d);

    return 0;
}