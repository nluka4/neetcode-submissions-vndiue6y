class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j = 0; 
        for(int i = 0; i < nums1.size(); i++){
            if(nums1[i] == 0){
                if(j < n){
                    nums1[i] = nums2[j];
                    j++;
                }else{
                    break;
                }
            } 
        }


        for(int i = 0; i < nums1.size()-1; i++){
            for(int j = i+1; j < nums1.size(); j++){
                if(nums1[i] > nums1[j]){
                    int temp = nums1[i];
                    nums1[i] = nums1[j];
                    nums1[j] = temp;
                }
            }
        }
    }
};