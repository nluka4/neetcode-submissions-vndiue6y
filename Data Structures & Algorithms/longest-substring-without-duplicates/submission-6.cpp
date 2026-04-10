class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0){
            return 0;
        }else if(s.size() == 1){
            return 1;
        }
        vector<string>v; 
        string temp = ""; 
         bool pojavio = false; 
    for (int i = 0; i < s.size(); i++) {
        temp = "";

        for (int j = i; j < s.size(); j++) {
            pojavio = false;

            for (int k = 0; k < temp.size(); k++) {
                if (s[j] == temp[k]) {
                    pojavio = true;
                    break;
                }
            }

            if (pojavio) {
                v.push_back(temp);
                break;
            } else {
                temp += s[j];

                if (j == s.size() - 1) {
                    v.push_back(temp);
                }
            }
        }
    }

        string max = v[0]; 

        for(string stemp : v){
            if(max.size() < stemp.size()){
                max = stemp;
            }
        }

        return max.size();

    }
};
