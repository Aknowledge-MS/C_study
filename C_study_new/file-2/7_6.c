#include <stdio.h>
int main()
{
    int a = 0,b = 0;
    int sub = 0;
    scanf("%d %d",&a,&b);
    sub = a;
    a = b;
    b = sub;
    printf("%d %d\n",a,b);
    return 0;
}