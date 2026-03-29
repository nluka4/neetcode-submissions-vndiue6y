class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         vector<string> strsSorted = strs; 
    map<string,vector<int>> m; 
    vector<vector<string>> resenje; 
    

    for(auto itr = strsSorted.begin(); itr != strsSorted.end();itr++){
        sort((*itr).begin(), (*itr).end());
    }

    // if(strs.size() == 1){
    //     vector<string> deo = {strs[0]};
    //     resenje.push_pack(deo);
    //     cout<<strs[0]<<endl;
    //     return 0; 
    // }

    if(strs.size() == 1){
        vector<string> deo = {strs[0]};
        resenje.push_back(deo);
        cout << resenje[0][0] << endl;
        return resenje;
    }


   

    for(int i = 0; i < strsSorted.size(); i++){
         m[strsSorted[i]].push_back(i);
        for(int j = 1; j < strsSorted.size(); j++){
            if(strsSorted[i] == strsSorted[j]){
                m[strsSorted[i]].push_back(j);
            }else{
                m[strsSorted[j]];
                break;}
        }
    }

    for(auto itr = m.begin();itr != m.end();itr++){
        sort(itr->second.begin(),itr->second.end());
        auto last = unique(itr->second.begin(),itr->second.end());
        itr->second.erase(last,itr->second.end());
    }


    for(auto itr = m.begin(); itr != m.end();itr++){
        vector<string>deo; 
        for(auto jtr = itr->second.begin();jtr != itr->second.end(); jtr++){
            deo.push_back(strs[*jtr]);
        }
        resenje.push_back(deo);
    }

    return resenje;
    }
};
