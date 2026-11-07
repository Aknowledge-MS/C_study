#include <stdio.h>
int main(){
    int n = 0,a,b,c;
    scanf("%d",&n);
    if(n >= 100 && n <= 999){
        a = n / 100;
        b = n / 10 % 10;
        c = n % 10;
        if(a == b || a == c || b == c){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}