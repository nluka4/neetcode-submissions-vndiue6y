static void QuickSort(int low, int high, vector<int>&nums);
static int partition(int low, int high, vector<int>&nums);

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        QuickSort(0,nums.size()-1,nums);
        
        return  nums;
    }
};


static void QuickSort(int low, int high, vector<int>&nums){
    if(low < high){
        int j = partition(low,high,nums);
        QuickSort(low,j,nums);
        QuickSort(j+1, high,nums); 
    }
}

static int partition(int low, int high, vector<int>&nums){
    int i = low - 1; 
    int j = high + 1; 
    int pivot = nums[(low + high) /2 ]; 

    while(true){
        do{
            i++;
        }while(nums[i] < pivot);

        do{
            j--; 
        }while(nums[j] > pivot); 
        if(i >= j) return j; 


        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}