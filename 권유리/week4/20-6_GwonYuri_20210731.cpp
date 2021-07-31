#include<stdio.h>
#define Max(a,b) ( a > b ? a : b )

int card[100], n, m, ans = 0;
void search(int x, int r,int sum)
{
	if (r == 3)
	{
		if (sum <= m)
			ans = Max(ans, sum);
		return;
	}
	if (x == n)
		return;
	search(x+1, r, sum);
	search(x + 1, r + 1, sum + card[x]);
}
int main()
{
	int i;
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
		scanf("%d", &card[i]);
	search(0, 0,0);
	printf("%d\n", ans);
}

