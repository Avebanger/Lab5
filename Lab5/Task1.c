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