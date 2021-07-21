#include <stdio.h>
#include <stdlib.h>

typedef struct a
{
	int len;
	int sum;
	char str[55];
}A;

A T[1005];
int n, i, j;
int cn;
int sum;
char str[55];

int compare(A*a, A*b)
{
	if (a->len > b->len) return 1;
	else if (a->len == b->len)
	{
		if (a->sum < b->sum) return -1;
		else if (a->sum == b->sum)
		{
			return strcmp(a->str, b->str);
		}
		else return 1;
	}
	else return -1;
}

int main()
{
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%s", &T[i].str);
		T[i].len = strlen(T[i].str);
		
		for (j = 0; j < T[i].len; j++)
		{
			if (T[i].str[j] >= '0' && T[i].str[j] <= '9')
			T[i].sum += T[i].str[j] - '0';
		}

	}

	qsort(T, n, sizeof(A), compare);

	for (i = 0; i < n; i++)
	{
		printf("%s\n",T[i].str);
	}
}