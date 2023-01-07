#include<iostream>
using namespace std;


class Queue{
    private:
    int size;
    int front;
    int rear;
    int *q;                 // queue implementation using arr

    public:
    Queue(int size){
        front=rear= -1;
        this->size=size;
        q=new int[this->size];

    }
    void enqueue(int data){
        if((rear+1)%size==front){
        cout<<"Queue is full no more data can be added. "<<endl;
    }
    else{
        rear=(rear+1)%size;
        q[rear]=data;
    }
    }

    int dequeue(){
        int x=-1;
        if(rear==front){
            cout<<"Queue is emptY"<<endl;
        }
        else{
            front=(front+1)%size;
            x=q[front];
        }

        return x;
    }
    void display(){
        int i = front+1;

        do{
            cout<<q[i]<<" "<<endl;
            i=(i+1)%size;
        }while(i!=(rear+1)%size);
        cout<<" "<<endl;
    }

};

int main(){
    Queue p(7);

    p.enqueue(4);
    p.enqueue(5);
    p.enqueue(6);
    p.enqueue(7);
    p.display();
    p.dequeue();
    p.display();

    
    return 0;

}
