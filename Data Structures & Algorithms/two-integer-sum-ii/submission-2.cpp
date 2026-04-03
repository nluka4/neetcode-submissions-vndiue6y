class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int sum = 0;
        vector<int>resenje;
        for(int i = 0; i < numbers.size();i++){
            if(resenje.size() > 0){
                break;
            }
            for(int j = 0; j < numbers.size();j++){
                if(numbers[i] != numbers[j]){
                    sum = numbers[i] + numbers[j];
                    if(sum == target){
                        resenje.push_back(i+1);
                        resenje.push_back(j+1);
                        break;
                    }
                }
            }
        }
        return resenje;
    }
};
