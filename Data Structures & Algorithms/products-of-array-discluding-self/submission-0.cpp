class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> resenje;
        for(int i = 0; i < nums.size();i++){
            int sum = 1;
            for(int j = 0; j < nums.size();j++){
                if(i == j){
                    continue;
                }

                sum*=nums[j];

            }
            resenje.push_back(sum);
        }

        return resenje;
    }
};
