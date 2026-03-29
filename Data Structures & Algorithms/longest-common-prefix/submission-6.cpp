class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string temp = strs[0];

    vector<string> resenja; 
    
    if(strs.size() == 1){
        return strs[0];
    }

    for(int i = 1; i < strs.size(); i++){
        if(strs[i][0] != temp[0]){
            return "";
        }

        string potResenje = "";

        for(int j = 0; j < temp.size();j++){
            if(j < strs[i].size()){
                if(temp[j] == strs[i][j]){
                    potResenje += temp[j];
                }else{
                    break;
                }
            }
        }

            resenja.push_back(potResenje);
        }

        if(resenja.size() > 0){
            sort(resenja.begin(),resenja.end());
            return resenja[0];
        }

    }
};