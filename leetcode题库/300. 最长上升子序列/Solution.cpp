class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int maxlen = 0;
        int n = nums.size();
        vector<int> dp(nums.size(),1);
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < i ;j++){
                if(nums[j] < nums[i])
                    dp[i] = max(dp[i] , dp[j]+1);
            }
            maxlen = max(maxlen,dp[i]);
        }
        return maxlen;
    }
};