#include <stdio.h>
#include <malloc.h> 
#include<locale.h>

int main() {
	setlocale(LC_ALL, "russan");
	int* mass;
	int size;
	printf("������� ������:");
	scanf_s("%d", &size);
	mass = (int*)malloc(sizeof(int) * size);
	printf("������� ������:");
	for (int i = 0; i < size; i++) {
		scanf_s("%d", &mass[i]);}
	int count = 0;
	for (int i = 1; i < size -1; i++) {
		if ((mass[i] < mass[i - 1]) && (mass[i]  < mass[i + 1])) {
			count++;
		}

	}
	if (mass[0] < mass[1]) {
		count++;
	}
	if (mass[size - 1] < mass[size - 2]) {
		count++;
	}
	printf("���������: %d ��������� ��������", count);
	free(mass);
	return 0;
}