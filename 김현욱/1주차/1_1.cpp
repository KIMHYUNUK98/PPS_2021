#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int arr[8] = {};
    int as, ds = 0;

    cout << "Enter the number: ";
    for(int j = 0 ; j < 8 ; j++) cin >> arr[j] ;

    for(int i = 0 ; i < 8 ; i++) 
    {
        if(arr[i]+1 == arr[i+1]) as++;
        else if(arr[i]-1 == arr[i+1]) ds++;
    }

    if(as == 7) cout << "ascending" << endl;
    else if(ds == 7) cout << "descending" << endl;
    else cout << "mixed" << endl;
}
