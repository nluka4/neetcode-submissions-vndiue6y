class MyHashSet {
private: 
    static const int Group = 10; 
    list<int> arr[Group];
public:
    MyHashSet() {
        
    }
    
    void add(int key) {
        int hash = key % Group; 
    
        for(int num : arr[hash]){
            if(num == key){
                return ;
            }
        }
        arr[hash].push_back(key);
    }
    
    void remove(int key) {
        int hash = key % Group; 
    
        for(int num : arr[hash]){
            if(num == key){
                arr[hash].remove(key);
                return; 
            }
        }
    }
    
    bool contains(int key) {
        int hash = key % Group; 
        for(int num : arr[hash]){
            if(num == key){
                return true;
            }
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */