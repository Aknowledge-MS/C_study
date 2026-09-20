#include <stdio.h>
int main()
{
	int a = 0, b = 0,x = 0,y = 0;
	a = (x = 7,x % 3);
	b = x = 7,x%3;
	printf("%d,%d,%d\n",a,b,(y = 5,y * 2));
	return 0;
}