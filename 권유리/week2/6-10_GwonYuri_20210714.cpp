#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
  string input;
  getline(cin,input);

  int length = input.size();
  string str;
  int n = length;
  set<string> s; 

  for(int j = 1; j<= length; j++){
    for(int i = 0; i<n; i++){
       str = input.substr(i,j);
       s.insert(str);
    }
    n = n - 1;
  }

  cout << s.size() << "\n";  
}