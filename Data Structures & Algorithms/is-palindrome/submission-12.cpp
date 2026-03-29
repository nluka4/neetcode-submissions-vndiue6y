class Solution {
public:
    bool isPalindrome(string s) {

    s.erase(remove_if(s.begin(), s.end(), ::ispunct),s.end());
    s.erase(remove_if(s.begin(), s.end(), ::isspace),s.end());

    transform(s.begin(),s.end(),s.begin(),[](unsigned char c){return tolower(c);});
    

    for(int i = 0, j = s.size()-1; i < j;i++,j--){
        if(s[i] != s[j]){
            return false;
        }
    }

    return true;

    }
};
