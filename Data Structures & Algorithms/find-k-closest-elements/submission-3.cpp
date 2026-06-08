class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    map<int,vector<int>> closest;
    vector<int>sumOfClosest; 
    
    int j = 0; 
    for(int i = 0; i < arr.size(); i++){
        
        if(i >= k){
            j++;
            closest[j] = closest[j-1];
            closest[j].erase(closest[j].begin());            
        }
        
        closest[j].push_back(arr[i]-x);

    }

    int sum = 0;
    for(auto tmp = closest.begin(); tmp != closest.end(); tmp++){
        for(auto arrTmp = tmp->second.begin(); arrTmp != tmp->second.end(); arrTmp++){
            sum += abs(*arrTmp);
        }
        sumOfClosest.push_back(sum);
        sum = 0;
    }


    int minVal = sumOfClosest[0];
    int rememberCnt = 0; 
    for(int i = 0; i<sumOfClosest.size();i++){
        if(minVal > sumOfClosest[i]){
            minVal = sumOfClosest[i];
            rememberCnt = i;
        }
    }
    
    vector<int> resenje = closest[rememberCnt];

    for(auto rsnj = resenje.begin(); rsnj != resenje.end();rsnj++){
        *rsnj+=x;
    }

    return resenje;
    }
};