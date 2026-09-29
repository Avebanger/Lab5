# Домашнее задание к работе 5

## Условие задачи
Решить уравнение.

## 1. Алгоритм и блок-схема

### Алгоритм
1. **Начало**
2. Объявить константы:
   - `M_PI` = 3.14159265358979323846 - Число Пи
3. Задать исходные данные:
   - `x` 
   - `y`  
   - `z`   
4. Вычислить уравнение:
   - c = pow(2, pow(y, x)) + pow(pow(3, x), y) - ((y * (atan(z) - M_PI / 6.0)) / (fabs(x) + 1.0 / (pow(y, 2) + 1.0)))
5. Вывести результаты расчетов с подстановкой всех значений в текст.
6. **Конец**

### Блок-схема

(https://github.com/Avebanger/Lab5/blob/master/математика.png)

## 2. Реализация программы
```
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL,"RUS");
	double c, x, y, z;
	printf("Введите x,y,z: ");
	scanf("%lf",&x);
    scanf("%lf", &y);
    scanf("%lf", &z);
    double chislitel = y * (atan(z) - M_PI / 6.0);
    double znamenatel = fabs(x) + 1.0 / (pow(y, 2) + 1.0);
    c = pow(2, pow(y, x)) + pow(pow(3, x), y) - (chislitel / znamenatel);
    printf("c = %lf", c);
}
```
## 3. Результаты работы программы

c = ...

## 4. Информация о разработчике

Ляховский Сергей бИЦТ - 262
