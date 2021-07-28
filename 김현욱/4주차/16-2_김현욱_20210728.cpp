// unordered map을 굳이 사용안해도 가능할 것 같음
// 중복된 수를 제거하는 아이디어는 중복됨은 두 번 쓰인 다는 것에 있다
// 중복되지 않는 것은 한 번만 count 되므로 index와 해당 숫자의 -1 관계를 잘 이용하면 가능

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> arr;
        unordered_map<int,int> M;
        
        for(int i = 0 ; i < nums.size() ; i++) {
            M[i+1]++;
            M[nums[i]]++;
        }
        for(auto v: M) {
            if(v.second == 1)
                arr.push_back(v.first);
            
            cout << v.first << " " << v. second << endl;
        }
        
        
        return arr;
    }
};