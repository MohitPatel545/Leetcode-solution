// javascript code

// /**
//  * @param {number[]} nums
//  * @return {number}
//  */
// var minMoves = function(nums) {
//     let max = Math.max(...nums);
//     let count = 0;

//     for(let i = 0; i < nums.length; i++){
//         count += max - nums[i];
//     }

//     return count;
// };

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi = 0;
        for(int i = 0; i < nums.size(); i++){
            maxi = max(maxi, nums[i]);
        }
        int count = 0;

        for(int i = 0; i < nums.size(); i++){
            count += maxi - nums[i];
        }

        return count;
    }
};