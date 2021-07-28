// ���ڰ� �־����� �� digit���� ������ �ؼ� ���ϴ� �˰����� ��� �� �־���
// unordered_map�� ����ؼ� �ش� ���ڰ� visited�� �������� ������ �Ǵ��ϴ� map�� ����� ����
// �����ʿ�..

class Solution {
public:
    
    int sums(int n) {
        int plus = 0;
        while(n >= 10) {
            plus += (n%10) * (n%10);
            n = n/10;
        }
        plus += n*n;
            
        return plus;
    }
    
    bool isHappy(int n) {
        unordered_map<int, bool> mp;
        int sum = sums(n);
        
        while(sum != 1) {
            if(mp[sum] == true) return false;
            else mp[sum] = true;
            
            sum = sums(sum);
        }
        
        if(sum == 1) return true;
        else return false;
    }
};