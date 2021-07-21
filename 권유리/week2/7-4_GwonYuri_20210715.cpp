#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    string str;
    string result[1000];
    
    cin >> str;

    for(int i=0; i<str.size(); i++){
        result[i] = str.substr(i,str.size());
    }

    sort(result,result+str.size());

    for(int i=0; i<str.size(); i++){
        cout << result[i] << endl;
    }
}