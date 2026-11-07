#include <stdio.h>
int main(){
    int n = 0,a = 0,b= 0,c= 0;
    scanf("%d",&n);
    if(n >= 100 && n <= 999){
    a = n / 100;
    b = n / 10 % 10;
    c = n % 10;
    if(n == a*a*a + b*b*b + c*c*c){
        printf("Yes");
    }
    else{
        printf("No");
    }
    }
    return 0;
}