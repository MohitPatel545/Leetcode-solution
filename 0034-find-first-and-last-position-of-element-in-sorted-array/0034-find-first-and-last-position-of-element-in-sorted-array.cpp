class Solution {
public:
    int first(vector<int>& nums, int k){
        int start = 0;
        int end = nums.size() -1;
        int mid = start + (end - start)/2;
        int ans = -1;
        while(start<=end){
            if(nums[mid] == k){
                ans = mid;
                end = mid - 1;
            }
            else if(nums[mid] < k){
                start = mid + 1;
            }
            else{
                end = mid -1;
            }
            mid = start + ( end - start)/2;
        }
        return ans;
    }
    int last(vector<int>& nums, int k){
        int start = 0;
        int end = nums.size() -1;
        int mid = start + (end - start)/2;
        int ans = -1;
        while(start<=end){
            if(nums[mid] == k){
                ans = mid;
                start = mid + 1;
            }
            else if(nums[mid] < k){
                start = mid + 1;
            }
            else{
                end = mid -1;
            }
            mid = start + ( end - start)/2;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target){
        return{first(nums, target),last(nums, target)};
    }
};