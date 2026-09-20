#include <stdio.h>
#include <stdlib.h>
int main()
{   system("chcp 65001");
    int a = 9;
    int b = 5;
    int c = a + b;
    int d = a - b;
    int e = a * b;
    float f = (float)a / b;
    int g = a % b;
    float h = (float)(a + b) / 2;
    printf("所给的两个数是 %d 和 %d\n", a, b);
    printf("它们的和是 %d,差是 %d,积是 %d,商是 %.2f,余数是 %d,平均值是 %.2f\n", c, d, e, f, g, h);
    return 0;

}