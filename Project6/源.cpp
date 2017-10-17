#include<stdio.h>
int main()
{
	float x;
	int a;
	scanf_s("%f", &x);
	a = int(x + 0.500000);
	printf("x四舍五入后为  %d\n",a);
}