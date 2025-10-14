#include<stdio.h>

int main() {
	int a, b, c;
	double t;
	scanf_s(" %d%d%d", &a, &b, &c);
	t = (double)(a + b + c) / 3;
	printf("%.3f\n",t);
	return 0;
}
