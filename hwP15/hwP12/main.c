#include <stdio.h>
#include <stdlib.h>

int maximum(int x, int y, int z);
int main()
{
	int number1;
	int number2;
	int number3;
	printf("Enter three integers:");
	scanf_s("%d %d %d",&number1,&number2,&number3);
	printf("Maximum is : %d\n", maximum(number1, number2, number3));
	return 0;
}
int maximum(int x, int y, int z)
{
	int m = x;

	if (y > m)
	{
		m = y;
	}
	if (z > m)
	{
		m = z;
	}
	return m;
}