class Solution {
public:

    bool binarysearch(vector<int>& arr,int t,int tt){
        int e = tt - 1;
        int s = 0;
        while(s <= e){
            int mid = s+(e-s)/2;
            if(arr[mid] == t){
                return true;
            }
            else if(arr[mid] > t){
                e = mid - 1;
            }
            else{
                s = mid+1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int total = row*col;
        vector<int> arr(total);
        int k = 0;
        for(int i = 0;i<row;i++){
            for(int j = 0;j<col;j++){
                arr[k] = matrix[i][j];
                k++;
            }
        }
        return binarysearch(arr,target,total);
    }
};