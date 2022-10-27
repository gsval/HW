
#include <stdio.h>
#include<locale.h>
#include "windows.h"
#include <math.h>



int main() {
	int flag = 0;
	setlocale(LC_ALL, "Russian");
	int press;
	float x1, x2;
	int k = 0;
	float pi; 
	float rad;
	pi = 3.14;
	printf("Добро пожаловать!");
	//system("cls");
	//sleep(500);
	Sleep(2000);
	system("cls");
	for (int i = 0; i < 2; i++) {
		printf("Загрузка.");
		Sleep(500);
		system("cls");
		printf("Загрузка..");
		Sleep(500);
		system("cls");
		printf("Загрузка...");
		Sleep(500);
		system("cls");
	}
	while (k == 0) {
		printf("Выбор фигуры:\n1. Прямоугольник.\n2. Треугольник.\n3. Круг.\n0. Выйти из приложения.\nВвод: ");

		scanf_s("%d", &press);
		system("cls");

		if (press == 1) {
			system("cls");
			printf("Введите две стороны прямоугольника:");
			scanf_s("%f %f", &x1, &x2);
			while (k == 0)
			{
				if (flag == 1) {
					flag = 0;
					break;
				}
				system("cls");
				printf("Меню:\n1. Найти площадь прямоугольника.\n2. Найти периметр прямоугольника.\n3. Найти диагональ прямоугольника.\n4. Вернуться к выбору фигуры.\n0. Выйти\nВвод: ");
				scanf_s("%d", &press);
				while (k == 0)
				{
					if (press == 0)
						return 0;
					if (press == 1) {
						printf("Площадь прямоугольника: %f\n", x1 * x2);
						system("pause");
						break;
					}
					if (press == 2) {
						printf("Периметр прямоугольника: %f\n", x1 * 2 + x2 * 2);
						system("pause");
						break;
					}
					if (press == 3) {
						printf("Диагональ прямоугольника: %f\n", (sqrt(x1 * x1 + x2 * x2)));
						system("pause");
						break;
					}
					if (press == 4) {
						system("cls");
						flag = 1;
						break;
					}
				}
			}

		}
		if (press == 2) {
			system("cls");
			printf("Введите две стороны прямоугольного треугольника:");
			scanf_s("%f %f", &x1, &x2);
			while (k == 0) {
				if (flag == 1) {
					flag = 0;
					break;
				}
				system("cls");
				printf("Меню:\n1. Найти площадь треугольника.\n2. Найти периметр треугольника.\n3. Найти диагональ треугольника.\n4. Вернуться к выбору фигуры.\n0. Выйти.\nВвод: ");
				scanf_s("%d", &press);
				while (k == 0) {
					if (press == 0) {
						return 0;
					}
					if (press == 1) {
						printf("Площадь треугольника: %f\n", (x1 * x2) / 2);
						system("pause");
						break;
					}
					if (press == 2) {
						printf("Периметр треугольника: %f\n", (sqrt((x1 + x2) * (x1 - x2)) + x1 + x2));
						system("pause");
						break;
					}
					if (press == 3) {
						printf("Диагональ треугольника: %f\n", (sqrt((x1 * x1) + (x2 * x2))));
						system("pause");
						break;
					}
					if (press == 4) {
						system("cls");
						flag = 1;
						break;

					}
				}
			}	
	
		}
		if (press == 3) {
			system("cls");
			printf("Введите радиус круга: ");
			scanf_s("%f", &x1);
			while (k == 0) {
				if (flag == 1) {
					flag = 0;
					break;
				}
				system("cls");
				printf("Меню:\n1. Найти площадь круга.\n2. Найти длину окружности круга.\n3. Найти диаметр круга.\n4. Вернуться к выбору фигуры.\n0.Выйти.\nВвод: ");
				scanf_s("%d", &press);
				while (k == 0) {
					if (press == 0) {
						return 0;
					}
					if (press == 1) {
						printf("Площадь круга: %f\n", pi*x1*x1);
						system("pause");
						break;
					}
					if (press == 2) {
						printf("Длина окружности круга: %f\n", (x1* pi * 2));
						system("pause");
						break;
					}
					if (press == 3) {
						printf("Диаметр круга: %f\n", x1 + x1);
						system("pause");
						break;
					}
					if (press == 4) {
						system("cls");
						flag = 1;
						break;
					}
				}
			}

		}
	}

}