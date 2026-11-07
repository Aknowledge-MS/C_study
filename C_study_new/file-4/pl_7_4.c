#include <stdio.h>
int main(){
    int n = 0,i;
    double a = 2.000000,b = 1.000000,sub,sum;
    scanf("%d",&n);
    if(n >= 1 && n <= 20){
        sum = a / b;
        for(i = 1;i < n;i++){
            sub = a;
            a = a + b;
            b = sub;
            sum = sum + a / b;
        }
        printf("%f\n",sum);
    }
    return 0;
}