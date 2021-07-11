#include <iostream>

using namespace std;

int main(){	
	int n;
	int cnt = 0;
	string str;
	cin >> n;

	for(int i=0; i<n; i++){
		cin >> str;
		int size = str.length();
		bool flag = true;
		
		for(int j=0; j<size; j++){
			for(int k=0; k<j; k++){
                // 두 문자가 연속되지 않았지만 떨어져 있는 경우 if 문장
				if(str[j] != str[j-1] && str[j] == str[k]){
					flag = false;
					break;			
				}				
			}
		}
		if(flag) cnt++;
	}
	
	cout << cnt;

    return 0;
}