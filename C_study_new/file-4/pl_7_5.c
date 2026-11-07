#include <stdio.h>
int main(){
    int L,R,S,a,b,c;
    int F = 1;
    scanf("%d %d",&L,&R);
        for(S = L;S <= R;S++){
            a = S / 100;
            b = S / 10 % 10;
            c = S % 10;
            if(S == a*a*a + b*b*b + c*c*c){
                printf("%d\n",S);
                F = 0;
            }
        }
    if(F == 1){
        printf("None");
    }
    return 0;
}