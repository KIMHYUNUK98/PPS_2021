#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int num1, num2;
    int a; 
    vector<int> arr;
    cin >> num1 >> num2;

    for(int i = 1 ; i <= num1 ; i++) {
        scanf("%d", &a);
        arr.push_back(a);
    }

    sort(arr.begin(), arr.end());

    printf("%d", arr[num2-1]);
    return 0;
}