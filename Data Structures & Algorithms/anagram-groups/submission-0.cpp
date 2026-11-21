class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>m1;
        for(string s : strs){
            string key = s;//u create a copy of this variable, any change to key won't effect the s vairable
            sort(key.begin(), key.end());
            m1[key].push_back(s);
        }
        vector<vector<string>>v1;
        for(auto &lt:m1){
            v1.push_back(lt.second);
        }
        return v1;
    }
};
