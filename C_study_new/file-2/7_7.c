#include <stdio.h>
int main()
{
    int n = 0;
    float p = 0.00,m = 0.00;
    scanf("%f %d %f",&p,&n,&m);
    float tot = 0.00,cha = 0.00;
    tot = p * n;
    cha = m - tot;
    printf("total = %.2f\n",tot);
    printf("change = %.2f",cha);
    return 0;
}