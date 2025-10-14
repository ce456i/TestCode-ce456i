#include<stdio.h>

int main() {
	int n, a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	if (a > 3 || b > 5 || c > 7) {
		printf("?");
	}
	else for (n = 10; n <= 100; n++) {
		if (n % 3 == a && n % 5 == b && n % 7 == c) {
			printf("%d\n", n);
			break;
		}
		if (n == 100) {
			printf("No answer.");
		}
	}
	return 0;
}
