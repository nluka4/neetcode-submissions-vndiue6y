class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int trecina = nums.size() / 3;
    cout<<"trecina "<<trecina<<endl;
    vector<int>resenja; 
    int cnt = 0; 

    if(nums.size() == 1){
        resenja.push_back(nums[0]);
        return resenja;
    }
    
    for(int i = 0; i < nums.size(); i++){
         cnt++; 
        int temp = nums[i];
        
        for(int j = 0; j < nums.size();j++){
            if(i == j){
                continue;
            }else if(temp == nums[j]){
                cnt++;
            }
        }


        if(cnt > trecina){
            resenja.push_back(temp);
        }

        cnt = 0;
    }


    sort(resenja.begin(),resenja.end());
    auto last = unique(resenja.begin(), resenja.end());
    resenja.erase(last, resenja.end()); 
    return resenja;
    }
};