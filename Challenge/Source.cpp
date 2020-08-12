#include<stdio.h>
int main()
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	if (a < b)
	{
		for (int i=a; i <= b; i++)
			printf("%d ", i);
		int 
	}
	else if (b < a)
	{
		for (int i=a;i>=b;i--)
			printf("%d ", i);
	}
	return 0;
}