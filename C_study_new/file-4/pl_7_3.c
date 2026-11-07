#include <stdio.h>
int main(){
    int a = 0,b = 0,x,y,r = 0,my = 0,mb = 0;
    scanf("%d %d",&a,&b);
    if(a >= 1 && a <= 10000 && b >= 1 && b <= 10000){
        x = a;
        y = b;
        if(y != 0){
            while(y != 0){
            r = x % y;
            x = y;
            y = r;
            }
            my = x;
        }
        else{
            my = x;
        }
        mb = a / my * b;
        printf("%d %d\n",my,mb);
    }
    return 0;
}