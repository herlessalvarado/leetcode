class Solution {
public:
    bool divisorGame(int N) {
        int count;
        count = helper(N);
        if(count%2==0) return false;
        return true;
    }
    
    int helper(int N){
        if(N==1) return 0;
        int res = 1+helper(N-1);
        return res;
    }
};