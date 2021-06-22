#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		int money = 0;
		int a, b;

		scanf("%d %d", &a, &b);

		if (a == 0) {
			money = 0;
		}
		else if (a == 1) {
			money = 5000000;
		}
		else if (a == 2 || a == 3) {
			money = 3000000;
		}
		else if (a == 4 || a == 5 || a == 6) {
			money = 2000000;
		}
		else if (a >= 7 && a <= 10) {
			money = 500000;
		}
		else if (a >= 11 && a <= 15) {
			money = 300000;
		}
		else if (a >= 16 && a <= 21) {
			money = 100000;
		}
		else {
			money = 0;
		}

		if (b == 0) {
			money += 0;
		}
		else if (b == 1) {
			money += 5120000;
		}
		else if (b == 2 || b == 3) {
			money += 2560000;
		}
		else if (b >= 4 && b <= 7){
			money += 1280000;
		}
		else if (b >= 8 && b <= 15) {
			money += 640000;
		}
		else if (b >= 16 && b <= 31) {
			money += 320000;
		}
		else {
			money += 0;
		}

		printf("%d\n", money);
	}

	return 0;
}