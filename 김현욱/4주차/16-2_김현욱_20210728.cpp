// unordered map�� ���� �����ص� ������ �� ����
// �ߺ��� ���� �����ϴ� ���̵��� �ߺ����� �� �� ���� �ٴ� �Ϳ� �ִ�
// �ߺ����� �ʴ� ���� �� ���� count �ǹǷ� index�� �ش� ������ -1 ���踦 �� �̿��ϸ� ����

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