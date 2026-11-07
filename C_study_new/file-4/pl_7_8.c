#include <stdio.h>
#include <math.h>

int main(){
    int N;
    int i;
    int a,b,c;
    int l1,l2;
    int count = 0;
    int sub = 0;

    scanf("%d",&N);
    for(i = 101;i <= N;i++){
        a = i / 100;
        b = i / 10 % 10;
        c = i % 10;
        l1 = 0;
        l2 = 0;
        sub = (int)sqrt(i);
        if(sub*sub == i){
            l1 = 1;
        }
        if(a == b || a == c || b == c){
            l2 = 1;
        }
        if(l1 == 1 && l2 == 1){
            count++;
        }
    }
    printf("%d",count);
    
    return 0;
}