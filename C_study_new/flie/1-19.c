#include <stdio.h>
#include <stdlib.h>
int main()
{
	system("chcp 65001");
	char ch = 'c';    
	int s = 0;
	ch = ch - 32;
	s = '2' - '0';
	printf("ch=%c,s=%d\n",ch,s);
	return 0;
}