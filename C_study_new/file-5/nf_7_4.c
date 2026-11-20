#include <stdio.h>

int max2(int a,int b){
    if(a >= b){
        return a;
    }
    else{
        return b;
    }
}

int max3(int a,int b,int c){
    int result;

    result = max2(a,b);
    if(result >= c){
        return result;
    }
    else{
        return c;
    }
}

int main(){
    int a,b,c;
    int result;

    scanf("%d %d %d",&a,&b,&c);
    result = max3(a,b,c);
    printf("%d\n",result);

    return 0;
}