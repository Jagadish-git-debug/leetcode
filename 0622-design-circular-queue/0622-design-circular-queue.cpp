class MyCircularQueue {
    vector<int>q;
    int capacity;
    int front;
    int rear;
    int size;
public:
    MyCircularQueue(int k) {
        q.resize(k);
        front =0;
        rear = 0;
        size =0;
        capacity = k;
    }
    
    bool enQueue(int value) {
        if(isFull()) return 0;
        q[rear]=value;
        size++;
        rear=(rear+1)%capacity;
        return 1;
    }
    
    bool deQueue() {
        if(isEmpty()) return 0;
        front = (front+1)%capacity;
        size--;
        return 1;
    }
    
    int Front() {
        if(isEmpty()) return -1;
        return q[front];
    }
    
    int Rear() {
        if(isEmpty()) return -1;
        
        return q[(rear-1 + capacity)%capacity];
    }
    
    bool isEmpty() {
        return size==0;
    }
    
    bool isFull() {
        return size==capacity;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */