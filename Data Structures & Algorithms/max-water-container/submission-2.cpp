#include <algorithm>

class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        
    int i = 0; 
    int j = heights.size() -1; 

    vector<int> areas;
    int area = 0; 
    while(i < j){
        area = (j - i) * (min(heights[i],heights[j]));
        areas.push_back(area);
        if(min(heights[i],heights[j]) == heights[i]){
            i++;
        }else{
            j--;
        }

    }

    return *max_element(areas.begin(),areas.end());

    }
};
