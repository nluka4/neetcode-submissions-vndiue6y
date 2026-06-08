class Solution {
public:
    bool checkInclusion(string s1, string s2) {
    sort(s1.begin(),s1.end());
    string s3 = "";
    string sTemp = "";
    
    for(int i = 0; i <= s2.size();i++){
        
        if(i >= s1.size()){
            sTemp = s3; 
            sort(sTemp.begin(),sTemp.end());
            

            if(sTemp == s1){
                return true;
            }

            s3.erase(0,1);
        }
        s3 += s2[i];
    }

        return false; 
    }
};
