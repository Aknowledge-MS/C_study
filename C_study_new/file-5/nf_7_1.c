#include <stdio.h>

int max2(int a,int b){
        if(a == b){
        return a;
    }
    else{
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}
}

int main(){
    int a,b;
    int result;
    
    scanf("%d %d",&a,&b);
    result = max2(a,b);
    printf("%d\n",result);

    return 0;
}