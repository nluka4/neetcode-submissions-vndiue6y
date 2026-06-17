class MyStack {
private:
        vector<int> stack;

    public:

    MyStack() {

    }

    vector<int> getStack(){
        return stack;
    }
    
    void push(int x) {
        stack.push_back(x);        
        cout<<"Dodao si na vrh steka"<<endl;
    }
    
    int pop() {
        int sizeStack = stack.size() - 1;
        int lastEl = stack[sizeStack];
        stack.pop_back();
        cout<<"Oduzeo si sa vrha steka"<<endl;
        return lastEl;
    }
    
    int top() {

        int sizeStack = stack.size();
        cout<<"Poslednji element steka "<<stack[sizeStack-1]<<endl;
        return stack[sizeStack - 1]; 
    }
    
    bool empty() {
        if(stack.size() == 0){
            return true; 
        }else{
            return false;
        }
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */