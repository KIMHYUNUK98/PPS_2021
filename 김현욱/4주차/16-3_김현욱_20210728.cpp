// 문제 조건에 해당 문자에 할당되는 숫자가 있고 그 숫자의 크기가 우선순위가 되는 경우
// 하나의 Pair로 만드는 것이 중요한데 그때 사용하기 쉬운 것이 unordered_map
// mp[s[i]] 는 s[i]의 문자에 할당된 숫자를 표현하는 것
// 그러므로 해당 문자의 우선순위를 숫자 비교를 통해 바로 연산하는 것이 가능하다.

class Solution {
public:
    int romanToInt(string s) {
        int total = 0;
        unordered_map<char, int>mp;
        
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        
        for(int i = 0; i < s.size()-1; i++) {
            if(mp[s[i]] >= mp[s[i+1]]) total += mp[s[i]];
            else total -= mp[s[i]];
        }
        total += mp[s.back()];
        return total;
    }
};

