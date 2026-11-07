#include <stdio.h>
int main(){
    int n = 0,sum = 0;
    scanf("%d",&n);
    if(n % 7 != 0){
    while(n > 0){
        sum = sum + n % 10;
        n = n / 10;
    }
    printf("%d\n",sum);
    }
    return 0;
}