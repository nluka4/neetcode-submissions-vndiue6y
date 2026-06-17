class MyQueue {
private: 
    vector<int> queue; 
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        queue.push_back(x);
    }
    
    int pop() {
        if(queue.size() > 0){
            int retVal = queue[0];
            queue.erase(queue.begin());
            return retVal;
        }
        return -1; 
    }
    
    int peek() {
        if(queue.size() > 0){
            return queue[0];
        }

        return -1; 
    }
    
    bool empty() {
        if(queue.size() == 0){
            return true;
        }

        return false; 
    }
};
/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */