#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "russian");
	int n = 0;
	int b = 0;
	printf("���-�����������: ");
	scanf_s("%d", &n);

	printf("������� ��������: ");
	while (n > 0) {
		int num;
		int sqr = 0;
		scanf_s("%d", &num);
		sqr = num * num;
		b = b + sqr;
		n = n - 1;
	}
	printf("����� ��������� ����� :%d\n", b);
	system("pause");
	return 0;

}