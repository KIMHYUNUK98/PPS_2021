#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
bool cmp(const string& a, const string& b){
    if(a.length() == b.length()) return (a < b);
    else return a.length() < b.length();
}
 
int main() {
    int n;
    string input[20001];
    
    cin >> n;
    
    for(int i = 0; i < n; i++) cin >> input[i];
    
    sort(input, input + n, cmp);
 
    for(int i = 0; i < n; i++){
        if(input[i] == input[i-1] && i != 0) continue;
        cout << input[i] << endl;
    }
    
    return 0;
}