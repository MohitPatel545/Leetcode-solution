class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>ans;
        for(int n:nums){
            ans[n]++;
        }
        int max = INT_MIN;
        int maj = 0;
        for(int n:nums){
            if(ans[n] > max){
                max = ans[n];
                maj = n;
            }
        }
        return maj;
    }
};