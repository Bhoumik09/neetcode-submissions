class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
       vector<int> v1(2*n, 0);
       for(int i=0;i<n;i++){
        v1[i]=nums[i];
        v1[i+n]=nums[i]; 
       }
       return v1;

    }
};