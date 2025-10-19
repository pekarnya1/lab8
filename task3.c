#include <locale.h>
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <math.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");
	int n, i;
	float result = 0;
	printf("введите число n \n");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		result += (pow(-1, i) * 1 / pow(2, i));
	}

	printf("%1.3f", result);
	}