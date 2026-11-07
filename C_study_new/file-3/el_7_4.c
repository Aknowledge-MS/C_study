#include <stdio.h>
int main(){
    int a = 2,b = 1,n = 0,t = 0,i;
    printf("%d %d\n",a,b);
    scanf("%d",&n);
    for(i = 1;i < n;i++){
        t = a;
        a = a + b;
        b = t;
        printf("%d %d\n",a,b);
    }
    return 0;
}