#include <stdio.h>
int main(){
    int n = 0,sum = 0,mid = 0;
    scanf("%d",&n);
    if(n >= 1 && n <= 1000000000){
        while(n > 0){
            mid = n % 100;
            n = n / 100;
            mid = mid / 10;
            sum = sum + mid;
            mid = 0;
        }
        printf("%d\n",sum);
    }
    return 0;
}