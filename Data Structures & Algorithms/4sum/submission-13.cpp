class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> resenje;
    int r,l = 0;
    long long sum;
    if(nums.size() == 4){
        for(int i = 0; i < nums.size();i++){
            sum+=nums[i];
        }

        if(sum == target){
            resenje.push_back({nums[0],nums[1],nums[2],nums[3]});
            return resenje;
        }
        return {};
    }
    sort(nums.begin(),nums.end());
    for (int i = 0; i < nums.size() - 3; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        for (int j = i + 1; j < nums.size() - 2; j++) {
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;

            l = j + 1; 
            r = nums.size()-1;
            while(l < r){

                sum = nums[l] + nums[i] + nums[r] + nums[j]; 


                if(sum == target){
                    resenje.push_back({nums[l],nums[i],nums[r],nums[j]});
                    l++;
                    r--;
                }else if(sum < target){
                    l++;
                }else{
                    r--;
                }

            }
        }
    }


    for(vector<int>&v : resenje){
        sort(v.begin(),v.end());
    }
    
    
   for (int i = 0; i < resenje.size() - 1; i++) {
            for (int j = i + 1; j < resenje.size(); ) {
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