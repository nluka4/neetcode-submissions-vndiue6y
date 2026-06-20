class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>indexes;

    int flag = 0;
    for(int i = 0; i < temperatures.size()-1;i++){
        for(int j = i + 1;j< temperatures.size();j++){
            if(temperatures[i] < temperatures[j]){
                indexes.push_back(j - i);
                flag = 1; 
                break;
            }
        }

        if(flag == 1){
            flag = 0;
            continue;
        }

        indexes.push_back(0);
    }

    indexes.push_back(0);
    return indexes;
    }
};
