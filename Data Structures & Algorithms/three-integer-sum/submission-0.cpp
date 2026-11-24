
class Solution {
public:
    vector<vector<int>> solveTwoSum(
        vector<int>& nums, int target, int start, int end
    ) {
        vector<vector<int>> ans;

        int i = start;
        int j = end;

        while (i < j) {
            int sum = nums[i] + nums[j];

            if (sum < target) {
                i++;
            }
            else if (sum > target) {
                j--;
            }
            else {
                ans.push_back({nums[i], nums[j]});

                int left = nums[i];
                int right = nums[j];

                // Skip duplicates
                while (i < j && nums[i] == left) i++;
                while (i < j && nums[j] == right) j--;
            }
        }

        return ans;
    }

    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        set<vector<int>> s1;

        int n = nums.size();

        for (int i = 0; i < n - 2; i++) {

            // Skip duplicate first elements
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int target = -nums[i];

            auto possibleAns = solveTwoSum(
                nums, target, i + 1, n - 1
            );

            for (auto& ans : possibleAns) {
                s1.insert({nums[i], ans[0], ans[1]});
            }
        }

        return vector<vector<int>>(s1.begin(), s1.end());
    }
};
