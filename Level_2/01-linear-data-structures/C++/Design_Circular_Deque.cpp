class MyCircularDeque {
public:
    int front =-1;
    int rear=-1;
    int * arr ;
    int size ;
    MyCircularDeque(int k) {
        size=k;
        arr=new int [size];
        front=-1;
        rear=-1;
    }
    
    bool insertFront(int value) {
        if(front == (rear+1)%size){
            return false ;
        }
        if(front==-1){
            front=0;
            rear=0;
            arr[front]=value;

            return true ;
        }
        rear=(rear+1)%size ;
        arr[rear]=value;
        return true ;

    }
    
    bool insertLast(int value) {
        if(front ==(rear+1)%size){
            return false ;
        }
        if(front ==-1){
            front =0;
            rear=0;
            arr[front]=value;
            return true ;
        }
        front =(front -1+size)%size;
        arr[front]=value ;
         return true ;
    }
    
    bool deleteFront() {
        if(front==-1){
            return false ;
        }
        if(front ==rear ){
            front =-1;
            rear=-1;
            return true ;
        }
       rear=(rear-1+size)%size;
       return true ;
    }
    
    bool deleteLast() {
        if(front ==-1){
            return false ;
        }
        if(front ==rear){
            front =-1;
            rear=-1;
            return true ;
        }
        front =(front +1)%size;
        return true ;
    }
    
    int getFront() {
        if(front ==-1){
            return -1 ;
        }
        return arr[rear];
    }
    
    int getRear() {
            if(rear ==-1){
            return -1 ;
        }
        return arr[front];
    }
    
    bool isEmpty() {
        if(front==-1){
            return true ;
        }
        else return false ;
        
    }
    
    bool isFull() {
        if(front ==(rear+1)%size)return true ;
        else return false ;
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