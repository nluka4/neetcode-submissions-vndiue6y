class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int right = 1;
    int left = 0; 

    for (int right = 0; right < nums.size(); right++) {
            
            int left = max(0, right - k);

            while (left < right) {
                if (nums[right] == nums[left]) {
                    return true;
                }

                left++;
            }
        }


    return false;
    }
};