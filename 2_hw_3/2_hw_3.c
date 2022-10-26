#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "rus");
	int x, y, z;
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	scanf_s("%d", &z);
	if (x == y && y == z && x == 5)
		printf("отличник");
	else {
		if (x == 2 || y == 2 || z == 2 || x == -1 || y == -1 || z == -1)
			printf("не сдал");
		else {
			if (x == 3 || y == 3 || z == 3)
				printf("троечник");
			else {
				if (x == 4 || y == 4 || z == 4)
					printf("хорошист");
			}
		}
	}
}