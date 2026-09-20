#include   <stdio.h>
int main()
{   int n = 152;
    int digit1 = n%10;
    int digit2 = n/10%10;
    int digit3 = n/100;
    printf("The ones digit of the integer 152 is %d, the tens digit is %d, and the hundreds digit is %d.\n", digit1,digit2, digit3);
    return 0;
}