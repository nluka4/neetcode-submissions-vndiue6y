class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0, j =0;

        while(i < nums.size()){
            j = i + 1; 
            if(j == nums.size()){
                break;
            }
            if(nums[i] == nums[j]){
                nums.erase(nums.begin()+j);
                continue;
            }
            i++;
        }

        return nums.size();
    }
};