    #include <stdio.h>
int main()
{
    int a,b,c,d;
    int sum = 0;
    float Average = 0.0;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    sum = a + b + c + d;
    printf("Sum = %d; ",sum);
    Average = (float)sum / 4;
    printf("Average = %.1f",Average);
    return 0;
}