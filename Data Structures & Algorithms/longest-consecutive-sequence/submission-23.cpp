class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    int output;

    if(nums.size() < 1){
        return 0;
    }

    if(nums.size() == 1){
        return 1;
    }
    
    for(int i = 0; i < nums.size() - 1; i++){
        for(int j = i + 1; j < nums.size(); j++){
            if(nums[i] > nums[j]){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }


    vector<vector<int>> resenja;
    bool uNizu = false;

    for (int i = 0; i + 1 < nums.size(); i++) {

        if (nums[i] + 1 == nums[i + 1]) {
            if (!uNizu) {
                resenja.push_back(vector<int>());
                resenja.back().push_back(nums[i]);
                uNizu = true;
            }
            resenja.back().push_back(nums[i + 1]);
        } 
        else if (nums[i] == nums[i + 1]) {
            continue;
        } 
        else {
            uNizu = false;
        }
    }


    if(resenja.size() == 0){
        output = 1;
    }
    else if(resenja.size() > 1){
        for(int i = 0; i < resenja.size() - 1; i++){
            for(int j = i + 1; j < resenja.size(); j++){
                if(resenja[i].size() > resenja[j].size()){
                    vector<int> temp = resenja[i];
                    resenja[i] = resenja[j];
                    resenja[j] = temp;
                }
            }
        }

        output = resenja[resenja.size() - 1].size();
    }
    else{
        output = resenja[0].size();
    }

    return output;
    }
};
