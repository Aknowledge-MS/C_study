#include <stdio.h>
int main()
{
	int c1,c2;
	printf("please enter 2 word:\n");
	c1 = getchar();
	c2 = getchar();
	printf("the first word:\n");
	putchar(c1);
	putchar(c2);
	putchar('\n');
	printf("the 2 word by printf:%c %c\n",c1,c2);
	return 0;
	
}