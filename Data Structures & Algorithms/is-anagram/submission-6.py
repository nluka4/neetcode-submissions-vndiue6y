class Solution:
    def isAnagram(self, s: str, t: str) -> bool:        
        charsS = {}; 
        charsT = {};

        if len(s) != len (t):
            print("Nisu isti")
            return False
        else:
            for i in range(0,len(s)):
                charsS[s[i]] = charsS.get(s[i], 0) + 1
                charsT[t[i]] = charsT.get(t[i], 0) + 1
        
        print("==============");
        print(charsS);
        print("==============");
        print(charsT);

        if charsT == charsS: 
            return True
        
        return False