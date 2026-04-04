class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>resenje;
        int sum = 0;
        
        for(int i = 0; i < nums.size();i++){
            for(int j = i+1; j < nums.size();j++){
                for(int k = j+1; k < nums.size();k++){
                    sum=nums[i]+nums[j]+nums[k];
                    if(sum == 0){
                        resenje.push_back({nums[i],nums[j],nums[k]});
                    }
                    sum-=nums[k];
                }
                sum-=nums[j];
            }
        sum = 0;
    }

    // for (int i = 0; i < resenje.size(); i++) {
    // }

    for (int i = 0; i < resenje.size(); i++) {
        sort(resenje[i].begin(), resenje[i].end());
        for (int j = i + 1; j < resenje.size(); ) {
            sort(resenje[j].begin(), resenje[j].end());
            if (resenje[i] == resenje[j]) {
                resenje.erase(resenje.begin() + j);
            } else {
                j++;
            }
        }
    }

        return resenje;
    }
};
