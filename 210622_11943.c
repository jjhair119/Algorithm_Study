#include<stdio.h>

int main() {
	int a, b, c, d;
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);

	int r1=0, r2=0;

	for (int i1 = 0; i1 < a+d; i1++) {
		r1++;
	}

	for (int i2 = 0; i2 < b + c; i2++) {
		r2++;
	}

	if (r1 < r2) {
		printf("%d", r1);
	}
	else {
		printf("%d", r2);
	}

	return 0;
}