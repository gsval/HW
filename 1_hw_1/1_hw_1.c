#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>
int main() {
	setlocale(LC_ALL, "russian");
	int x1, y1, x2, y2, x3, y3;

	printf("Âåäèòå êîîðäèíàòû âåðøèí òðåóãîëüíèêà:");
	scanf_s("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

	//int S = abs((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1)) / 2
	int a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	int b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	int c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	int P = a + b + c;
	int p = P / 2;
	int S = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("P òðåóãîëüíèêà: P= %0.2d\n", P);
	printf("S òðåóãîëüíèêà: S= %0.2d\n", S);
	system("pause");
	return 0;
}
