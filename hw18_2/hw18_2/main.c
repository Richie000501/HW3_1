#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CRT_SECURE_NO_WARNINGS
int main()
{
	char string1[10] = "Welcome";
	char string2[10];

	int len;

	strcpy(string2, string1);
	printf("string2=%s\n", string2);

	len = strlen(string2);
	printf("¦r¦êµ{«×¬°%d\n", len);
	return 0;
}