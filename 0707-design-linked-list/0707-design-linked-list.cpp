class MyLinkedList {
    int data;
    MyLinkedList* next;
public:
    MyLinkedList* head = NULL;

    MyLinkedList() {
        head = NULL;
    }
    MyLinkedList(int val){
        data = val;
        next = NULL;
    }
    
    int get(int index) {
        int k=0;
        MyLinkedList* temp = head;
        while(temp){
            
            if(k==index) return temp->data;
            k++;
            temp = temp->next;
        }
        return -1;
    }
    
    void addAtHead(int val) {
        MyLinkedList* obj = new MyLinkedList(val);
        obj->next = head;
        head = obj;
    }
    
    void addAtTail(int val) {
        MyLinkedList* obj = new MyLinkedList(val);
        if(head == NULL) {
            head = obj;
            return;
        }
        MyLinkedList* temp = head;
        while(temp->next){
            temp=temp->next;
        }
        temp->next= obj;
    }

    
    void addAtIndex(int index, int val) {
        if(index ==0) {
            addAtHead(val);
            return;
        }
        MyLinkedList* node = new MyLinkedList(val);
        MyLinkedList* temp = head;
        int k = 0;
        while(temp){
            
            if(k==index-1){
                break;
            }
            k++;
            temp=temp->next;
        }
        node->next=temp->next;
        temp->next = node;
    }
    
    void deleteAtIndex(int index) {
        if (index ==0 ){
            head = head -> next;
            return;
        }
        int k =0;
        MyLinkedList* temp =head;
        while(temp && k<index-1){
            k++;
            temp=temp->next;
        }
        if(temp == NULL || temp->next == NULL)
            return;

        temp->next = temp->next->next;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */