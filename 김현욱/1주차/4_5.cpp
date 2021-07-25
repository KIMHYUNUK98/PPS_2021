class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num==1)
            return true;
        long m=1;
        while(m<num)
        {
            m*=4;
            if(m==num)
                return true;
        }
        return false;
    }
};