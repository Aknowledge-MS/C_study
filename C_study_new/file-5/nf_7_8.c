#include <stdio.h>

int factorial(int n){
    int i;
    int sum = 1;

    if(n == 0){
        return 1;
    }
    else{
    for(i = 1;i <= n;i++){
        sum = sum * i;
    }
        return sum;
    }
}

int main(){
    int n;
    int result;

    scanf("%d",&n);
    result = factorial(n);

    printf("%d\n",result);

    return 0;
}