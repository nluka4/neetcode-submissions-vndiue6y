class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if len(strs) == 1:
            return strs[0]

        sizes = []; 
        temp = strs[0]
        for temp2 in strs[1:]:
            minimume = 0;
            for i in range(0,min([len(temp),len(temp2)])):
                if(temp[i] == temp2[i]):
                    minimume+=1
                else: 
                    break;
            sizes.append(minimume);


        return strs[0][0:min(sizes)];