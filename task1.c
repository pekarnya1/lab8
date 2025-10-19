//#include <locale.h>
//#include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdlib.h>
//#include <math.h>
//
//
//int main()
//{
//	setlocale(LC_CTYPE, "RUS");
//	int i, n, m;
//	printf("ВВЕДИТЕ СТЕПЕНЬ \n");
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++) {
//		printf("2^%d = %10.0f\n", i, pow(2, i));
//	}
//	printf("Результат: %1.1fK\n", pow(2, n) / 1024);
//	
//	printf("---------\n");
//
//	printf("ВВЕДИТЕ ЧИСЛО m\n"); //задания 4-5
//	scanf_s("%d", &m);
//	for (i = 1; i <= m; i++) {
//		printf("2^%d = %10.1fK\n", i, pow(2, i)/1024);
//	}
//}