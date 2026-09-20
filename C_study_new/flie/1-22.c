#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	system("chcp 65001");
	int a = 6;
	double result = a*((7 + sqrt(9.0))) / 2;
	printf("��ʽa*((7 + sqrt(9.0))) / 2�Ľ���ǣ�%.1f\n",result);
	return 0;
}