#include <malloc.h>
#include <stdio.h>

void bubble(int arr[], int N, int* srav2, int* obmen2) {
	printf("Bubble\n");
	int tmp;
	*srav2 = 0;
	*obmen2 = 0;
	int z = N;
	int flag3 = 0;
	int flag = 0;
	for (int i = 0; i < N; i++) {
		for (int k = 1; k < z; k++) {
			*srav2 = *srav2 + 1;
			if (arr[k] < arr[k - 1]) {
				tmp = arr[k];
				arr[k] = arr[k - 1];
				arr[k - 1] = tmp;
				*obmen2 = *obmen2 + 1;
			}
		}
		z--;
	}
	for (int g = 0; g < N; g++)
		printf_s("%d ", arr[g]);
}

int main() {
	int N;
	scanf_s("%d", &N);
	int*arr = (int*)malloc(sizeof(int) * N);
	int x;
	int y;
	for (int i = 0; i < N; i++)
		scanf_s("%d", &arr[i]);
	bubble(arr, N, &x, &y);
	printf_s("\nsravneniy = %d", x);
	printf_s("\nperestanovok = %d", y);

}