class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    int n = nums.size(); 

    if(n == 0){
        return false;
    }
    
    int TF = 0; 
    int i = 1; 
    for(auto itr = nums.begin(); itr != nums.end()-1;itr++){
        for(auto jtr = nums.begin()+i; jtr != nums.end();jtr++){
            if(*itr == *jtr){
                TF = 1; 
            }
        }
        i++;
    }

    if(TF == 0){
        return false;
    }else{
        return true;
    }
    }
};