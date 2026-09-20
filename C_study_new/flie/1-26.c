#include <stdio.h>
#include <stdlib.h>
int main()
{
	system("chcp 65001");
	int a = 3;
    int b;
    a += a *= a + (b = 2);
	printf("����a��ֵΪ��%d\n",a);
	printf("����b��ֵΪ��%d\n",b);
	return 0; 
}