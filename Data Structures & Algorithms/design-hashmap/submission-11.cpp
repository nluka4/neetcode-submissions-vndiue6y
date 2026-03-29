class MyHashMap {
private: 
        static const int Group = 1009; 
        pair<int,int> arr[Group];  
        bool used[Group];
    public: 
        MyHashMap(){
            for(int i = 0; i < Group; i++){
                used[i] = false; 
            }

        }

    void put(int key, int value);
    int get(int key);
    void remove(int key);
    void print();

};


void MyHashMap::put(int key, int value) {
    int hash = key % Group; 
    pair<int,int> temp;
    temp.first = key; 
    temp.second = value; 
    arr[hash] = temp;
    used[hash] = true;
}

int MyHashMap::get(int key) {
    int hash = key % Group;
    if(arr[hash].first == key && used[hash] == true){
        return arr[hash].second;
    }
    return -1; 
}

void MyHashMap::remove(int key) {
    int hash = key%Group; 
    if(arr[hash].first == key){
        arr[hash] = {};
        used[hash] = false; 
    }

}

void MyHashMap::print(){
    
    for(int i = 0; i < Group;i++){
        if(used[i] == false) continue;
            cout<<"["<<arr[i].first<<" "<<arr[i].second<<" "<<"]"<<'\n';
        
    }
}
/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */