class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
         nums.erase(remove(nums.begin(),nums.end(),val),nums.end());

    for(auto itr = nums.begin(); itr < nums.end(); itr++){
            cout<<*itr<<" ";
    }
    cout<<endl;
    cout<<"Razlicito: "<<nums.size()<<endl;

        return nums.size(); 
    }
};