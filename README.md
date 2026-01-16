# Домашнее задание к работе 8
## Условие задачи

<img width="785" height="172" alt="image" src="https://github.com/user-attachments/assets/1a8be228-7cce-4a83-943c-a43df6904c30" />


## 1. Алгоритм и блок-схема
### Алгоритм
1. **Начало**
2. Ввод значения n
3. цикл **for**
   -  `i = 1` → инициализация
   -  `x <= n` → условие
   -  `i++` → изменение
4. Вывести результат на экран.
5. **Конец**
   
### Блок-схема
<img width="247" height="398" alt="image" src="https://github.com/user-attachments/assets/e5db2d11-a427-4e12-917f-572238277919" />


## 2. Реализация программы
```
#include <locale.h>
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <math.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");
	int n, i;
	float result = 1;
	printf("введите число n \n");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		result += (pow(-1, i) * 1 / pow(2, i));
	}

	printf("%1.3f", result);
	}
```

## 3. Результаты работы программы
```
введите число n
10
0.667
```

<img width="576" height="205" alt="image" src="https://github.com/user-attachments/assets/87adeabd-6d5f-41a9-9bac-9e0e6ad944be" />

