#include <stdio.h>

void printStars(int n){
    int i;

    for(i = 1;i <= n;i++){
        printf("*");
    }
    printf("\n");
}

int main(){
    int n;

    scanf("%d",&n);
    printStars(n);

    return 0;
}