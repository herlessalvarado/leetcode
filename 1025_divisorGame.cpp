class Solution {
public:
    bool divisorGame(int N) {
        int count=0;
        count = helper(N,count);
        if(count%2==0) return false;
        return true;
    }
    
    int helper(int N, int count){
        if(N==1) return 0;
        count = 1+helper(N-1,count);
        return count;
    }
};