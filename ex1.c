#include<stdio.h>
main()
{
    double a,b;
    double x;
    double y;
    printf("请输入两个数:\n");
    scanf("%lf%lf",&a,&b);
    x=a+b;
    y=x*x;
    printf("计算结果为:%.2lf\n",y);
}