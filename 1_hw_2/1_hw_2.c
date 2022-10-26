#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "russian");
	int a, b, c;
	printf("Введите число:");
	scanf_s("%d", &a);
	b = a + 1;
	c = b + 1;
	printf("№1: %d\n №2: %d\n №3: %d\n", a, b, c);
	return 0;
}