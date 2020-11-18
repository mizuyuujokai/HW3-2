#include<stdio.h>
#include<stdlib.h>

int power(int b, int e)
{
	int t;
	int p = 1;
	for (t = 0; t < e; t++)
	{
		p = p * b;
	}
	return p;
}

int main(void)
{
	int i, j;
	
	printf("enter base number and exponent\n");
	scanf_s("%d %d", &i, &j);

	printf("\nPower:%d\n", power(i, j));

	system("pause");
	return 0;
}