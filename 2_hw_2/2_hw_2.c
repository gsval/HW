#include <stdio.h>
int main() {
	int x, y, z;
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	scanf_s("%d", &z);
	if ((x != z) && (x != y)) {
		if ((x > z) && (x > y))
			z += x;
		else if ((y > x) && (y > z))
			z += y;
		else
			z *= z;
	}
	else {
		if ((x == y) && (x == z))
			printf("all ints ==");
		else {
			if (x == y)
				printf("x = y\n");
			if (x == z)
				printf("x = z\n");
			if (y == z)
				printf("y = z\n");
		}
	}
}