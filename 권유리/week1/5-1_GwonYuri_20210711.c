#include <stdio.h>

int main(){
    int N,M;
    int count;
    
    scanf("%d %d", &N, &M);
	count = N * M - 1;
	printf("%d", count);
    return 0;
}