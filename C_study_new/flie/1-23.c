#include <stdio.h>
#include <stdlib.h>
int main()
{
	system("chcp 65001");
	double r = 3.0;
	double a = 4.0;
	double b = 5.0;
	double result;
	const double PI = 3.14159;
	result = PI * r * r /(a + b);
	printf("���Ϊ��%1f\n",result);
	return 0;
}