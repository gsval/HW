
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
	printf("����� ����������!");
	//system("cls");
	//sleep(500);
	Sleep(2000);
	system("cls");
	for (int i = 0; i < 2; i++) {
		printf("��������.");
		Sleep(500);
		system("cls");
		printf("��������..");
		Sleep(500);
		system("cls");
		printf("��������...");
		Sleep(500);
		system("cls");
	}
	while (k == 0) {
		printf("����� ������:\n1. �������������.\n2. �����������.\n3. ����.\n0. ����� �� ����������.\n����: ");

		scanf_s("%d", &press);
		system("cls");

		if (press == 1) {
			system("cls");
			printf("������� ��� ������� ��������������:");
			scanf_s("%f %f", &x1, &x2);
			while (k == 0)
			{
				if (flag == 1) {
					flag = 0;
					break;
				}
				system("cls");
				printf("����:\n1. ����� ������� ��������������.\n2. ����� �������� ��������������.\n3. ����� ��������� ��������������.\n4. ��������� � ������ ������.\n0. �����\n����: ");
				scanf_s("%d", &press);
				while (k == 0)
				{
					if (press == 0)
						return 0;
					if (press == 1) {
						printf("������� ��������������: %f\n", x1 * x2);
						system("pause");
						break;
					}
					if (press == 2) {
						printf("�������� ��������������: %f\n", x1 * 2 + x2 * 2);
						system("pause");
						break;
					}
					if (press == 3) {
						printf("��������� ��������������: %f\n", (sqrt(x1 * x1 + x2 * x2)));
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
			printf("������� ��� ������� �������������� ������������:");
			scanf_s("%f %f", &x1, &x2);
			while (k == 0) {
				if (flag == 1) {
					flag = 0;
					break;
				}
				system("cls");
				printf("����:\n1. ����� ������� ������������.\n2. ����� �������� ������������.\n3. ����� ��������� ������������.\n4. ��������� � ������ ������.\n0. �����.\n����: ");
				scanf_s("%d", &press);
				while (k == 0) {
					if (press == 0) {
						return 0;
					}
					if (press == 1) {
						printf("������� ������������: %f\n", (x1 * x2) / 2);
						system("pause");
						break;
					}
					if (press == 2) {
						printf("�������� ������������: %f\n", (sqrt((x1 + x2) * (x1 - x2)) + x1 + x2));
						system("pause");
						break;
					}
					if (press == 3) {
						printf("��������� ������������: %f\n", (sqrt((x1 * x1) + (x2 * x2))));
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
			printf("������� ������ �����: ");
			scanf_s("%f", &x1);
			while (k == 0) {
				if (flag == 1) {
					flag = 0;
					break;
				}
				system("cls");
				printf("����:\n1. ����� ������� �����.\n2. ����� ����� ���������� �����.\n3. ����� ������� �����.\n4. ��������� � ������ ������.\n0.�����.\n����: ");
				scanf_s("%d", &press);
				while (k == 0) {
					if (press == 0) {
						return 0;
					}
					if (press == 1) {
						printf("������� �����: %f\n", pi*x1*x1);
						system("pause");
						break;
					}
					if (press == 2) {
						printf("����� ���������� �����: %f\n", (x1* pi * 2));
						system("pause");
						break;
					}
					if (press == 3) {
						printf("������� �����: %f\n", x1 + x1);
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