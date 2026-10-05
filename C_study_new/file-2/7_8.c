#include <stdio.h>
int main()
{
    int n = 0,k = 0;
    int pa = 0,le = 0;
    scanf("%d %d",&n,&k);
    pa = n / k;
    le = n - pa * k;
    float ra = 0.00;
    ra = (float)n / k;
    printf("packs = %d\n",pa);
    printf("left = %d\n",le);
    printf("ratio = %.2f",ra);
    return 0;
}