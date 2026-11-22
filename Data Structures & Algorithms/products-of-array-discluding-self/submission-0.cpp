class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long product = 1;
        int n = nums.size();
        bool hasZero = false;
        int indexZero=-1;
        bool allZero = false;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                if(!hasZero){
                    hasZero=true;
                    indexZero=i;
                    continue;
                }
                allZero=true;
                break;
            }
            
            product*=nums[i];
        }
        vector<int>ans(n,0);
        if(allZero)return ans;
        else if(hasZero){
            ans[indexZero]=product;
            return ans;
        }
        for(int i = 0;i<n;i++){
            ans[i]=product/nums[i];
        }
        return ans;
    }
};
