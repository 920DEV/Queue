// inserting and delting in queue using array using two pointer.
#include<iostream>
using namespace std;

class Queue{
    private:
    int size;
    int front;
    int Rear;
    int *q;
    public:

// consturctor
    Queue(int size){
        front=Rear= -1;
        this->size=size;
        q=new int[this->size];

    }

    // functions 
    void enquee(int data){
        if(Rear==size-1){
            cout<<"The queue is full"<<endl;
        }
         else{
        q[Rear++]=data;
    }

    }
    int dequeue(){
        int x;
        if(Rear==front){
            cout<<"Queue is empty";
        }
        else{
            x = q[front++];
        }
        return x;
    }
    // ! function for displaying queue
   void display(){
    for (int i = front; i <= Rear-1; i++)
    {
        cout<<q[i]<<endl;
    }
    cout<<""<<endl;
    
   }
};

int main(){
    Queue p(7);
    p.enquee(8) ;
    p.enquee(5) ;
    p.enquee(7) ;
    p.dequeue();
    p.display();

    return 0;

}

