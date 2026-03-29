class Solution {
public:
    int majorityElement(vector<int>& nums) {
         sort(nums.begin(),nums.end());
        map<int,int>ponavljanja;

       for (int i = 0; i < (int)nums.size(); ) {
            int value = nums[i];
            int acc = 1;
            int j = i + 1;

            for ( ; j < (int)nums.size(); j++) {
                if (nums[j] == value) acc++;
                else break;
            }

            ponavljanja.insert(pair<int,int>(value,0));
            ponavljanja[value] = acc;
            i = j;  
        }

        int max = 0; 
        for(auto itr = ponavljanja.begin(); itr != ponavljanja.end();itr++){
           if(itr->second > max){
            max = itr->second;
           } 
        }

        for(const auto &p: ponavljanja){
            if(p.second == max){
                return p.first;
            }
        }
    
        return 0;
    }
};