class Solution {
public:
    void sortColors(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
        int minIndex = i; 
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[j] < nums[minIndex]) {
                minIndex = j;
            }
        }
        int temp = nums[i];
        nums[i] = nums[minIndex];
        nums[minIndex] = temp;
    }
    }
};