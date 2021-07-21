#include<stdio.h>

int main() {
	int t,x,y,a,b;
	double z;

	scanf("%d%d%d",&x,&y,&t);
	z=(double)1000/y*x;

	while(t--){
		scanf("%d%d",&a,&b);
		if(z>=(double)1000/b*a) z=(double)1000/b*a;
	}

	printf("%.2f", z);
	return 0;
}