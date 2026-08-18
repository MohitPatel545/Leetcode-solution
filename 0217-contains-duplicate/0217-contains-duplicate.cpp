class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> ans;
        for(int n: nums){
            ans[n]++;
        }
        for(int n: nums){
            if(ans[n] > 1){
                return true;
            }
        }
        return false;
    }
};