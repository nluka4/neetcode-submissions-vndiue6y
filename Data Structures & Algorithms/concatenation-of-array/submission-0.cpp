class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>returnVector; 

        for(int i = 0; i < 2; i++){
            for(auto itr = nums.begin() ; itr != nums.end(); itr++){
                returnVector.push_back(*itr);
            }
        }
        return returnVector;
    }
};