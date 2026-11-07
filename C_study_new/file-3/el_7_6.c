#include <stdio.h>
int main(){
    int n = 0,d,l = 0;
    scanf("%d",&n);
    if(n >= 2){
        for(d = 2;d <= (n - 1);d++){
            if(n % d == 0){
                l = 1;
                break;
            }
        }
        if(l == 1){
            printf("No\n");
        }
        else{
            printf("Yes\n");
        }
    }
    else{
        printf("No\n");
    }
    return 0;
}