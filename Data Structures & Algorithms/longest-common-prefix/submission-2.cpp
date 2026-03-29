#include<string.h>

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         if(strs.size() == 1) return strs[0];
            string word1 = strs[0];
    int len = strlen(word1.c_str());
    
    vector<string>potentialSolution;

    // cout<<len<<endl;
    for(int i = 1; i < strs.size();i++){
        string temp = "";
        for(int j = 0; j < len;j++){
            if(word1[j] == strs[i][j]){
                temp = temp + word1[j];
            } else break;
        }
        potentialSolution.push_back(temp);
    }

    if(potentialSolution.size() == 0) return "";
    
    string min = potentialSolution[0];
    for(auto itr = potentialSolution.begin(); itr != potentialSolution.end();itr++){
        if(min > *itr){
            min = *itr;
        }
    }

    // cout<<min<<endl;
    return min;
    }
};