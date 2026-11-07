#include <stdio.h>
int main(){
    int n = 0,out = 0,i,a = 1;
    scanf("%d",&n);
    if(n >= 1 && n <= 20){
        for(i = 1;i < n;i++){
            a = (a + 1) * 2;
        }
        out = a;
        printf("%d\n",out);
    }
    return 0;
}