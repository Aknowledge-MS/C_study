#include <stdio.h>

int isEven(int n){
    if(n % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    int result;

    scanf("%d",&n);
    result = isEven(n);

    if(result == 1){
        printf("Even\n");
    }
    if(result == 0){
        printf("Odd\n");
    }
    return 0;
}