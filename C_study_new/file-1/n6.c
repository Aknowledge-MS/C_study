#include <stdio.h>
int main()
{
	int a,b,sum1,sum2;
	printf("enter a, b: ");
	a = getchar();
	b = getchar();
	sum1 = a - '0';
	sum2 = b - '0';
	int z = sum1 + sum2;
	putchar(z);
	printf("\na+b=%d\n",z);
	return 0;
}