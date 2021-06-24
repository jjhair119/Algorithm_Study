#include<stdio.h>
#include<math.h>

int main() {
	
	while(1){
		int a, b, c;
    		scanf("%d %d %d", &a, &b, &c);

    		if(a == 0 && b == 0 && c == 0)
     		break;

		if(2 * b == a + c)
			printf("AP %d\n", 2 * c - b);
		else
		        printf("GP %d\n", c*c/b);

  	}

	return 0;
}
