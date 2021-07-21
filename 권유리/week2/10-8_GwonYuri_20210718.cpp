#include <iostream>
using namespace std;

int main() {
	int a, b; 
	long long int bunja = 1, bunmo = 1; 
    
	cin >> a;
	cin >> b;
    
	b = b - a; 
    
	if (b == 0) { 
		cout << 1; 
		return 0;
	}
    else { 
        a = a + b - 1; 
	    if (a - b < b) { 
		    b = a - b; 
	    }
	    for (int i = a; i > a - b; i--) { 
		    bunja = bunja * i; 
	    }
	    for (int i = b; i > 0; i--) {
		    bunmo = bunmo * i;
	    }
	    cout << bunja / bunmo;
    }
}