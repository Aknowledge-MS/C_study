#include <stdio.h>

int sumToN(int n){
    int i;
    int sum = 0;
    if(n == 0){
        return 0;
    }
    else{
    for(i = 1;i <= n;i++){
        sum = sum + i;
    }

    return sum;
    }
}

int main(){
    int n;
    int result;
    
    scanf("%d",&n);
    result = sumToN(n);
    printf("%d\n",result);

    return 0;
}