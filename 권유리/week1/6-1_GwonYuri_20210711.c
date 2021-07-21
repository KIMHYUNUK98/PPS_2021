#include <stdio.h>

int main(void) {
	int num,i,j;
	scanf("%d",&num);

	int count = 0;
	 
	for (i = 1; i <= num; i=i*2)
	{
		j = i;
	}

	if (num%j == 0) {
		printf("%d\n",j);
		return 0;
	}
	else{
		printf("%d\n",(num-j)*2);
	}

	return 0;
}