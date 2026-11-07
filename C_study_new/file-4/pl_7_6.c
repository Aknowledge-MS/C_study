#include <stdio.h>

int main() {
    int L, R;
    int count = 0;
    int sum = 0;
    
    scanf("%d %d", &L, &R);
    for(int i = L; i <= R; i++) {
        int is_prime = 1;
        if(i <= 1) {
            is_prime = 0;
        }
        for(int j = 2; j < i; j++) {
            if(i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if(is_prime == 1) {
            count++;
            sum = sum + i;
        }
    }
    printf("%d %d\n", count, sum);
    
    return 0;
}