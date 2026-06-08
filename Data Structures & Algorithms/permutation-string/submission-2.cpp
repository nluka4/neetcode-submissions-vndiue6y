class Solution {
public:
    bool checkInclusion(string s1, string s2) {
         sort(s1.begin(),s1.end());
    cout<<s1<<endl;

    string s3 = "";

    for(int i = 0; i <= s2.size();i++){
        
        if(i >= s1.size()){
            string sTemp = s3; 
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
