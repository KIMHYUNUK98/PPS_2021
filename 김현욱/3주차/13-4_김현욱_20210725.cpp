#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int num;
    int ans;
    int count;

    vector<int> arr, arr2;
    cin >> num;

    for(int i = 0 ; i < num ; i++) {
        cin >> ans;
        arr.push_back(ans);
        arr2.push_back(0);
    }

    for(int i = 0 ; i < num ; i++) {
        if(arr[i] == 1) {
            count++;
            for(int j=0;j<3;j++){
				if(i+j < num){
					arr[i+j] = arr[i+j] == 0 ? 1 : 0;
				}
			}
        }
    }
    
    cout << count;

    return 0;
}