#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "russian");
	int n = 0;
	int b = 0;
	printf("Кол-воэлементов: ");
	scanf_s("%d", &n);

	printf("Введите элементы: ");
	while (n > 0) {
		int num;
		int sqr = 0;
		scanf_s("%d", &num);
		sqr = num * num;
		b = b + sqr;
		n = n - 1;
	}
	printf("Сумма квадратов равна :%d\n", b);
	system("pause");
	return 0;

}