class Solution {
public:

    void trasepose(vector<vector<int>>& nums, int r,int c){
        for(int i = 0; i<r; i++){
            for(int j = i+1; j<c; j++){
                swap(nums[i][j], nums[j][i]);
            }
        }

    }
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        trasepose(matrix, row, col);
        for(int i = 0; i<row; i++){
            int s = 0;
            int e = col-1;
            while(s <= e){
                swap(matrix[i][s], matrix[i][e]);
                s++;
                e--;
            }
        }
    }
};