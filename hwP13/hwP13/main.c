#include<stdio.h>
#include<stdlib.h>

double power(double, int);
int main()
{
	int k;
	double ans;
	printf("�p��3.5��k����?�п�Jk=");
	scanf_s("%d", &k);
	ans = power(3.5, k);
	printf("3.5��%d����=%f\n", k, ans);
}
double power(double x, int n)
{
	int i;
	double powerxn = 1;
	for (i = 1; i <= n; i++)
		powerxn = powerxn * x;
	return powerxn;
}