class DoubleLL{

    public:
    int data;
    int key;
    DoubleLL *next;
    DoubleLL *prev;

    DoubleLL(int data,int key){
        this->data = data;
        this->key = key;
        this->next = NULL;
        this->prev = NULL;
    }


};


class LRUCache {
    int capacity;
    DoubleLL *head;
    DoubleLL *tail;
    unordered_map<int,DoubleLL*>values;
public:
    LRUCache(int capacity) {
        this->capacity = capacity;
        head = NULL;
        tail = NULL;
    }
    
    int get(int key) {

        if(values.find(key) == values.end())return -1;

        DoubleLL* node = values[key];
        if(node != head){
            // cout<<node->key<<":not at head"<<endl;
            node->prev->next = node->next;
            if(node != tail){
                node->next->prev = node->prev;
            }else{
                tail = node->prev;
            }
            head->prev = node;
            node->next = head;
            head = node;
        }

        return values[key]->data;

    }
    
    void put(int key, int value) {

        bool isKeyExist = (values.find(key) != values.end());

        if(values.size() == capacity && !isKeyExist){
            int tailKey = tail->key;
            // cout<<"evicting:"<<tailKey<<endl;
            tail = tail->prev;
            // cout<<tail<<endl;
            if(tail != NULL)tail->next = NULL;
            values.erase(tailKey);
        }
        
        if(isKeyExist){
            DoubleLL *node = values[key];
            node->data = value;

            if(node != head){
            // cout<<node->key<<":not at head"<<endl;
                node->prev->next = node->next;
                if(node != tail){
                    node->next->prev = node->prev;
                }else{
                    tail = node->prev;
                }
                head->prev = node;
                node->next = head;
                head = node;
            }
        }else{
            DoubleLL *newNode = new DoubleLL(value,key);
            if(head == NULL)head = newNode;
            else{
                head->prev = newNode;
                newNode->next = head;
                head = newNode;
            }

            if(tail == NULL)tail = newNode;
            // else {
            //     tail->next = newNode;
            //     newNode->prev = tail;
            //     tail = newNode;
            // }

            values[key] = newNode;
            
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */