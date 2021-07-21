// 백준 - 백설 공주와 일곱 난쟁이
#include <stdio.h>

int main(void)
{
	int a[9],sum=0;
    int i,j,k;

	for(i=0;i<9;++i)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	for(i=0;i<8;++i)
	{
		for(j=i+1;j<9;++j)
		{
			if(sum-a[i]-a[j]==100)
			{
				for(k=0;k<9;++k)
				{
					if(k==i || k==j) continue;
					printf("%d\n",a[k]);
				}
				return 0;
			}
		}
	}
}
