class MyCircularDeque {
public:
    deque<int> d;
    int size,temp;
    MyCircularDeque(int k) {
        size=k;
        temp=k;
    }
    
    bool insertFront(int value) {
        if(size==0) return false;
        d.push_front(value);
        size--;
        return true;
    }
    
    bool insertLast(int value) {
        if(size==0) return false;
        d.push_back(value);
        size--;
        return true;
    }
    
    bool deleteFront() {
        if(size==temp) return false;
        d.pop_front();
        size++;
        return true;
    }
    
    bool deleteLast() {
        if(size==temp) return false;
        d.pop_back();
        size++;  
        return true;
    }
    
    int getFront() {
        if(size==temp) return -1;
        return d.front();
    }
    
    int getRear() {
        if(size==temp) return -1;    
        return d.back();
    }
    
    bool isEmpty() {
        if(size==temp) return true;
        return false;
    }
    
    bool isFull() {
        if(size==0) return true;
        return false;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */