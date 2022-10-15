#include<stdio.h>
#include<locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "russian");
	int a, b;
	printf("¬ведите 2 числа:");
	scanf_s("%d %d", &a, &b);
	int summ = a + b;
	int difference = a - b;
	int product = a * b;
	float division = 0.1 * a / b;
	float aver_square_degree = (sqrt(a) + sqrt(b)) / 2;
	float aver_module = (abs(a) + abs(b)) / 2;
	int remainder = a % b;
	printf("%d %d %d %.2f %.2f %d", summ, difference, product, aver_square_degree, aver_module, remainder, division);
	return 0;


}