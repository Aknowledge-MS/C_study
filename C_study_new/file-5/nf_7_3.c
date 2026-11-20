#include <stdio.h>

int isPass(int score){
    if(score >= 60){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int score;
    int ressult;

    scanf("%d",&score);
    ressult = isPass(score);
    printf("%d\n",ressult);

    return 0;
}