class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> max; 
        int j = 0;

        if(nums.size() == 1){
            max.push_back(nums[0]);
            return max;
        }

        int maxTmp = nums[0]; 
        
        while(true){

            if(j < k){
                if(nums[j] > maxTmp){
                    maxTmp = nums[j];
                }
                j++;
            }else{
                max.push_back(maxTmp);

                j = max.size();
                k++;

                if(k > nums.size()){
                    break;
                }

                maxTmp = nums[j];
            }
        
            if(k > nums.size()){
                break;
            }
        }

        return max;
    }
};