#include<stdio.h>

int main(){

    int N=0;

    scanf("%d", &N);

    N = N*(N-1)*(N-2)*(N-3);
    N /= 24;

    printf("%d", N);

    return 0;
}