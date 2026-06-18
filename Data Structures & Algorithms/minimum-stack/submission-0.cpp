class MinStack {
private: 
    vector<int>minstack; 

public:
    MinStack() {
        
    }
    
    void push(int val) {
        minstack.push_back(val);    
    }
    
    void pop() {
        minstack.pop_back();
    }
    
    int top() {
        int n = minstack.size()-1;
        return minstack[n];
    }
    
    int getMin() {
        if(minstack.size() > 0){

            int min = minstack[0];
            for(int i = 0; i < minstack.size();i++){
                if(min > minstack[i]){
                    min = minstack[i];
                }
            }
            
            return min; 
        }else{
            return -1; 
        }
    }
};
