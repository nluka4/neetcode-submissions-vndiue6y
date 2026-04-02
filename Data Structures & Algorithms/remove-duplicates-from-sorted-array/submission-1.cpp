class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
    while(i < nums.size()){
        int j = i + 1; 
        if(j == nums.size()){
            break;
        }
        cout<<i<<" nums[i]= "<<nums[i]<<" "<<j<<" nums[j]= "<<nums[j]<<endl;
        if(nums[i] == nums[j]){
            nums.erase(nums.begin()+j);
            continue;
        }
        cout<<"==============="<<endl;
        i++;
    }

        return nums.size();
    }
};