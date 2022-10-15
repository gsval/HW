#include<stdio.h>
#include<math.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "russian");
	int a;
	printf("Введите длину ребра: ");
	scanf_s("%d", &a);
	int V = pow(a, 3);
	int S_side_surface = pow(a, 2) * 6;
	int S_full_surface = pow(a, 2) * 4;
	printf("Результат: \nОбъём=%d\nS полной поверхности=%d\nS боковой поверхности=%d\n", V, S_side_surface, S_full_surface);
	return 0;
}