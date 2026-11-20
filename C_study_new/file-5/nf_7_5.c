#include <stdio.h>

int subtract(int x, int y){
    int result;

    result = x - y;

    return result;
}

int main(){
    int a,b;
    int result_1,result_2;
    int sub;

    scanf("%d %d",&a,&b);
    result_1 = subtract(a,b);
    result_2 = subtract(b,a);

    printf("%d %d\n",result_1,result_2);

    return 0;
}