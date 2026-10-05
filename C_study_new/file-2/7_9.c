#include <stdio.h>
int main()
{
    int s1 = 0,s2 = 0,h = 0,m = 0;
    scanf("%d",&s1);
    h = s1 / 3600;
    m = (s1 - h * 3600) / 60;
    s2 = s1 - (h * 3600 + m * 60);
    printf("%d %d %d\n",h,m,s2);
    return 0;
}