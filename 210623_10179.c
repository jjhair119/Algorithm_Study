#include<stdio.h>

int main() {
	
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		double num;
		scanf("%lf", &num);

		printf("$%.2lf\n", num * 0.8);
	}

	return 0;
}