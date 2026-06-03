class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int right = 1;
    int left = 0; 

    for(; right < nums.size(); right++){
        left = 0;
        while(left != right){
            if(nums[right] == nums[left]){
                if(abs(right - left) <= k){
                    return true; 
                }
            }
            left++;
        }
    }

    return false;
    }
};