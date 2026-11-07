#include <stdio.h>
int main(){
    int n = 0,ten = 0,thou = 0,sum = 0;
    scanf("%d",&n);
    thou = n / 1000;
    ten = n / 10 % 10;
    sum = thou + ten;
    printf("%d\n",sum);
    return 0;
}