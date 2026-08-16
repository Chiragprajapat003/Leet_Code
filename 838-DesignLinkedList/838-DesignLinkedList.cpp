// Last updated: 8/16/2026, 9:18:31 PM
class Node {
    public :
    int data ;
    Node* nxt ;

    Node(int val){
        data = val;
        nxt = nullptr;
    }
};

class MyLinkedList {
    private:
      Node* head;
      int size;
public:
    MyLinkedList() {
     head = nullptr;
       size = 0;
    }
    
    int get(int index) {
        if(index < 0  || index >= size){
            return -1;
        }
       

        Node* temp = head;
      
        while( index > 0){
            temp = temp->nxt;
            index--;
        }

        return temp->data;
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->nxt = head;
        head = newNode;
        size++;
    }
    
    void addAtTail(int val) {
        Node* new_Node = new Node(val);

        if(head == nullptr){
            head = new_Node;
            size++;
            return;
        }
        Node* temp = head;
        while(temp->nxt != nullptr){
            temp = temp->nxt;
        }
        temp->nxt = new_Node;
        size++;
    }
    
    void addAtIndex(int index, int val) {
        Node* new_Node  = new Node(val);
        if(index > size){
            return ;
        }
        if(index < 0){
            index = 0;
        }

        if(index == 0){
           addAtHead(val);
            return;
        }

        Node* temp = head;
        while(index > 1){
            temp = temp->nxt;
            index--;
        }
        
        
        new_Node->nxt = temp->nxt;
        temp->nxt = new_Node;
        size++;
    }
    
    void deleteAtIndex(int index) {
        
        if(index < 0 || index >= size){
            return ;
        }

        if(index == 0){
            Node* del = head;
            head = head->nxt;
            delete del;
            size--;
            return;
        }

        Node* temp = head;
        while(index > 1){
            temp = temp->nxt ;
            index--;
        }

        Node* del = temp->nxt;
        temp->nxt = del->nxt;
        delete del;
        size--;
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