#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float ft(float x1, float y1, float x2, float y2)
{   float dx = (x1 - x2);
    float dy = (y1 - y2);
    float ds = sqrt(dx * dx + dy * dy);
    return ds;
}
int main()
{   system("chcp 65001");
    float x1, y1, x2, y2;
    printf("请输入第一个点的坐标(x1,y1；如1.0 2.0)：\n");
    scanf("%f %f", &x1, &y1);
    printf("请输入第二个点的坐标(x2,y2；如3.0 4.0)：\n");
    scanf("%f %f", &x2, &y2);
    float ds = ft(x1, y1, x2, y2);
    printf("两点之间的距离为：%.2f\n", ds);
    return 0;
    }