class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans; 
        for(int i = 0; i < 2;i++){
            for(auto itr = nums.begin() ; itr != nums.end(); itr++){
                ans.push_back(*itr);
            }
        }

        return ans; 
    }
};