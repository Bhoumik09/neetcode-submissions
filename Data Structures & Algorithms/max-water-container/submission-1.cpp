class Solution {
public:
    int calculateArea(int i , int j, vector<int>&h){
        int width = j-i;
        int height = min(h[i], h[j]);
        return width * height;
    }
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int i = 0;
        int j = n-1;
        int maxArea = 0;
        while(i<j){
            int currArea = calculateArea(i, j, heights);
            maxArea = max(currArea, maxArea);
            if(heights[i]>heights[j])j--;
            else if(heights[i]<heights[j])i++;
            else {
                i++;
                j--;
            }
        }
        return maxArea;
    }
};
