class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int>m1;
        int n = nums.size();
        for(int i=0;i<n;i++){
            m1[nums[i]]=i;
        }
        vector<int>ans(2,0);
        for(int i=0;i<n;i++){
            int currentNumber=nums[i];
            int remainingValue=target - currentNumber;
            if(m1.find(remainingValue)!=m1.end()){
                if(i==m1[remainingValue])continue;
                return ans={i,m1[remainingValue]};
            }
        }
        return ans;
    }
};
