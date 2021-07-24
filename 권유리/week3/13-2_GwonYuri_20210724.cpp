#include <iostream>
using namespace std;

int main() {
	bool neg=false;
	int num, ans=0;
    
	while(scanf("%d", &num)==1) {		
		if(num<0) neg=true;	
		if(neg) ans+=(num>=0 ? num*(-1) : num);	
		else ans+=num;
	}
	cout << ans;
}