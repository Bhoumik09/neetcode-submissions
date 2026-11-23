class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         priority_queue<int>pq;
        unordered_map<int, bool>m1;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            m1[nums[i]]=1;
            pq.push(nums[i]);
        }
        int len = 0;
        while(!pq.empty()){
            int top = pq.top();
            pq.pop();
            int consLen=1;
            while(!pq.empty() && m1.find(top-1)!=m1.end()){
                top=top-1;
                pq.pop();
                consLen+=1;
            }
            len= max(len, consLen);

        }
        return len;
    }
};
