#include <stdio.h>
#include<locale.h> //не указана бибилиотека для подключения русского языка
int main() {
	setlocale(LC_ALL, "rus");
	int age;
	scanf_s("%d", &age); //не указано присваивание перед age
	if (age <= 13)
		printf("%d - детство", age);
	else if (14 <= age < 25)
		printf("%d - молодость", age); //неверный формат вывода(веместо %d %f)
	else if (25 <= age && age < 60)
		printf("%d - зрелость", age); //неверный формат вывода(веместо %d %f)
	else
		printf("%d - старость", age);
	return 0;
}