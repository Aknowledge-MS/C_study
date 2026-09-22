#include <stdio.h>
float av(int a,int b,int c,int d,int e)
{   
     float ave = (float)(a + b + c + d + e) / 5;
     return ave; 
}
int main()
{
    int a,b,c,d,e;
    printf("please enter five integer:");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	float op1 = av(a,b,c,d,e);
	float op2 = (a - op1)*(a - op1) +  (b - op1)*(b - op1) +  (c - op1)*(c - op1) +  (d - op1)*(d - op1) +  (e - op1)*(e - op1);
	float op3 = op2 / 5;
	printf("the average:%.2f\n",op1);
	printf("the variance:%.2f\n",op3);
	return 0; 
}