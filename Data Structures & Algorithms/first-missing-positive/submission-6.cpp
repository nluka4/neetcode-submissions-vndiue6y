class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for(int i = 0; i < nums.size()-1;i++){
            for(int j = i + 1; j < nums.size();j++){
                if(nums[i] > nums[j]){

                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp; 
                }
            }
        }

        int max = nums[0];
            for(int i = 0; i < nums.size();i++){
                if(max < nums[i]){
                max = nums[i];
            }
        }
        int resenje = 0; 
        
        if(nums[0] > 1){
            return 1;
        }

        bool hasOne = false; 
        for(int i : nums){
            if(i == 1){
                hasOne = true;
                break;
            }
        }
        
        if(!hasOne){
            resenje = 1;
            return resenje;
        }

        for(int i = 0; i < nums.size()-1;i++){
             if(nums[i] == nums[i+1]){
                continue;
            }else if(nums[i]+1 == nums[i+1]){
                continue;
            }else if(nums[i]+1 != nums[i+1]){
                if((nums[i]+1) < 1){
                    continue;
                }
                resenje = nums[i] + 1;
                return resenje;
             }else if(resenje == 0){
                continue;
            }
        }
        resenje = max + 1;

        if(resenje < 1){
            resenje = 1;
        }

        
        return resenje;
    }
};