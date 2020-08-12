#include<stdio.h>
#include<math.h>
int main()
{
	int a, b;
	double x, j, sum = 0, sd, sd2;
	scanf_s("%d %d", &a, &b);
	float average = (a + b) / 2.0;
	if (a < b)
	{
		int count = (b - a);
		for (int i = a; i <= b; i++) {
			printf("%d \n", i);
			x = i - average;
			j = pow(x, 2);
			sum += j;
		}
		sd = sum / count;
		sd2 = sqrt(sd);
		printf("\n");
	}

	else if (b < a)
	{
		int count = (a - b);
		for (int i = a; i >= b; i--) {
			printf("%d ", i);
			x = i - average;
			j = pow(x, 2);
			sum += j;
		}
		sd = sum / count;
		sd2 = sqrt(sd);
		printf("\n");

	}

	printf("Average = %.2f \n", average);
	printf("sd = % .2lf \n", sd2);
	return 0;
}
