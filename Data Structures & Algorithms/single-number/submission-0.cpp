class Solution {
public:
    int singleNumber(vector<int>& nums) {
    map<int,int> numsCnt; 

    for(int i = 0; i < nums.size();i++){
        numsCnt[nums[i]]++;
    }


    for(auto itr = numsCnt.begin(); itr != numsCnt.end();itr++){
            if(itr->second == 1)
            {
                return itr->first;
            }
        }
    }
};
