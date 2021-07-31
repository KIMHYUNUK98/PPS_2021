// 중복되지 않는 부분은 어떻게 넣으면 될까?
// 이중 for문으로 같으면 새로운 배열에 추가하는 식으로 하면 되고
// sort 함수를 그 이후 부분만 해주면 가능하다

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int count = 0;
        
        for(int i = 0 ; i < arr2.size() ; i++) {
            for(int j = 0 ; j < arr1.size() ; j++) {
                if(arr2[i] == arr1[j]) {
                    swap(arr1[j], arr1[count]);
                    count++;
                }
            }
        }
        
        sort(arr1.begin()+count , arr1.end());
        
        return arr1;
    }
};