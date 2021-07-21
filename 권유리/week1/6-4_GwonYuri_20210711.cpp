#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
	int num;
	vector<int> num_list;
 
	cin >> N;	
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		num_list.push_back(num);
	}
 
	sort(num_list.begin(), num_list.end());
 
	num_list.erase(unique(num_list.begin(), num_list.end()), num_list.end());
 
	for (int i=0; i<num_list.size(); i++) {
		cout << num_list[i] << " ";
	}
	cout << endl;

	return 0;
}