class Solution {
public:
    int calPoints(vector<string>& operations) {
         vector <int> result;

        reverse(operations.begin(),operations.end());

    
        operations.pop_back();
        while(true){
            auto itr = operations.end();
        
            if(*itr != "+" && *itr != "C" && *itr != "D"){
                result.push_back(stoi(*itr));
            }

            int n = result.size() - 1;
            if(result.size() != 0){
                if(*itr == "D"){
                    result.push_back(result[n] * 2);
                }else if(*itr == "C"){
                    result.pop_back();
                }else if(*itr=="+"){
                    result.push_back(result[n] + result[n-1]);
                }
            }
        
            if(operations.size() == 0){
                break;
            }

            operations.pop_back();
        }


        return accumulate(result.begin(),result.end(),0);
    }
};