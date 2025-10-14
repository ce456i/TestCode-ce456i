#include<math.h>
#include<stdio.h>

int main() {
	int n;
	double t;
	scanf_s("%d", &n);
	if (n > 360) {
		printf("?\n");
	}
	else{
		t = sin(n);
		printf("%f\n", t);
	}
	return 0;
}

