#include <stdio.h>
#include <malloc.h>

int znak(char* str, int size) {
	int znak = 0;
	for (int i = 0; i < size; i++) {
		if (str[i] != ' ') {
			znak++;
		}
	}
	printf("Kol-vo znachimyh znakov: %d\n", znak);
	return 0;
}
int strochn_b(char* str, int size) {
	int b = 0;
	for (int i = 0; i < size; i++) {
		if ((str[i] > 96) && (str[i] < 223)) {
			b++;
		}
	}
	printf("Kol-vo strochn bukv: %d\n", b);
	return 0;
}
int zaglav_B(char* str, int size) {
	int B = 0;
	for (int i = 0; i < size; i++) {
		if ((str[i] > 64 )&& (str[i] < 91)) {
			B++;
		}
	}
	printf("Kol-vo zaglav Bukv: %d\n", B);
	return 0;
}
int slova(char* str, int size) {
	int slova = 1;
	for (int i = 0; i < size; i++) {
		if (str[i] == 32) {
			slova++;
		}
	}

	printf("Kol-vo slov: %d\n",slova);
	return 0;
}


int main() {

	char* stroka;
	stroka = (char*)malloc(sizeof(char) * 100);
	printf("Vvedite angl stroku: ");
	gets(stroka);
	int size = 0;
	while (stroka[size] != '\0') {
		size++;
	}
	znak(stroka, size);
	strochn_b(stroka, size);
	zaglav_B(stroka, size);
	slova(stroka, size);

	free(stroka);
	system("pause");
	return 0;
}