class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>resenje;
        for(int i = 0; i < nums.size()-1;i++){
            for(int j = i + 1; j < nums.size();j++){
                if((nums[i] + nums[j]) == target){
                    resenje.push_back(i);
                    resenje.push_back(j);
                    return resenje; 
                }
            }
        }
        resenje.push_back(0);
        resenje.push_back(0);
        return resenje;
    }
};

