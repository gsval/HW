#include<stdio.h>
#include<malloc.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "russian");
	int* mass;
	int size;
	printf("¬ведите размер массива:");
	scanf_s("%d", &size);
	mass = (int*)malloc(sizeof(int) * size);
	printf("¬ведите массив:");
	for (int i = 0; i < size; i++) {
		scanf_s("%d", &mass[i]);
	}
	int k = 0;
	for (int i = 1; i < size - 1; i++) {
		if (mass[i] > mass[i - 1] && mass[i] > mass[i + 1]) {
			k++;
		}
	}
	int* max_mass;
	max_mass = (int*)malloc(sizeof(int) * k);
	printf("–езультат: минимальный из %d локальных максимумов [", k);
	for (int i = 1; i < size - 1; i++) {
		if (mass[i] > mass[i - 1] && mass[i] > mass[i + 1]) {
			printf("%d", mass[i]);
		}

	}
	printf("] равен ");

	int n = 0;
	for (int i = 1; i < size - 1; i++) {
		if (mass[i] > mass[i - 1] && mass[i] > mass[i + 1]) {
			max_mass[n] = mass[i];
			n++;
		}
	}
	int min;
	min = max_mass[0];
	for (int i = 1; i < k; i++) {
		if (max_mass[i] < min) {
			min = max_mass[i];
		}
	}
	printf("%d", min);
	free(max_mass);
	free(min);
	return 0;
}