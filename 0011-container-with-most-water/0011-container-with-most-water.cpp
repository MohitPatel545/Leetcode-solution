class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size() - 1;
        int w = 0;
        int max_area = 0;
        int  h = 0;
        int area = 0;
        while(start < end){
             h = min(height[start],height[end]);
             w = end - start;
             area = h * w;
             max_area = max(max_area,area);
             if(height[start] > height[end]){
                end--;
             }
             else{
                start++;
             }

        }
        return max_area;
    }
};