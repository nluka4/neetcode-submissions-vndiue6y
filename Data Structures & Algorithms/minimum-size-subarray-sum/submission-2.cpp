class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

    int l = -1, sum = 0, najbolji = INT_MAX;

    for (int r = 0; r < nums.size(); r++) {
        sum += nums[r];

        while (sum >= target) {
            najbolji = min(najbolji, r - l); // trenutna validna duzina
            l++;
            sum -= nums[l];
        }
    }

    if (najbolji == INT_MAX) najbolji = 0;

    return najbolji;
    }
};