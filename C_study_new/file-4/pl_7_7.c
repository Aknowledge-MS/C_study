#include <stdio.h>

int main(){
    int L,R;
    int light;
    int count = 0,sum = 0;
    int i;
    int a,b,c,d,e;

    scanf("%d %d",&L,&R);
    for(i = L;i <= R;i++){
        a = i / 10000;
        b = i / 1000 % 10;
        c = i / 100 % 10;
        d = i / 10 % 10;
        e = i % 10;
        if((a + b + c + d + e) % 7 == 0){
            light = 1;
        }
        else{
            light = 0;
        }
        if(light == 1){
            count++;
            sum = sum + i;
        }
    }
    printf("%d %d",count,sum);
    
    return 0;
}