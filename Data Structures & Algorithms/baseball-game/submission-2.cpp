class Solution {
public:
    int calPoints(vector<string>& operations) {
         vector <int> result;

    reverse(operations.begin(),operations.end());
    
    for(auto itr = operations.begin(); itr != operations.end();itr++){
        cout<<*itr<<endl;
    }
    
    cout<<"eeeeeeeeeeee"<<endl;
    
    operations.pop_back();
    while(true){
        auto itr = operations.end();
        
        if(*itr != "+" && *itr != "C" && *itr != "D"){
            result.push_back(stoi(*itr));
        }

        if(result.size() != 0){
            if(*itr == "D"){
                int n = result.size() - 1;
                cout<<"Dupliram: "<<result[n] * 2<<endl;
                result.push_back(result[n] * 2);
            }else if(*itr == "C"){
                result.pop_back();
            }else if(*itr=="+"){
                int n = result.size() - 1;
                cout<<"Sabiram: "<<result[n] + result[n-1]<<endl;
                result.push_back(result[n] + result[n-1]);
            }
        }
        
        if(operations.size() == 0){
            break;
        }

        operations.pop_back();
    }

    for(auto itr = result.begin(); itr != result.end();itr++){
        cout<<*itr<<endl;
    }

    return accumulate(result.begin(),result.end(),0);
    }
};