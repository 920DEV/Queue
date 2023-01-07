#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node*next;

    // ~Node(){
    //     int val=this->data;
    //     if(this->next!=NULL){
    //         delete next;
    //         this->next=NULL;
    //     }
    //     cout<<"The element which is delted is "<<val<<endl;
    // }
};

void enquee(Node *&front,Node*&rear,int data){
    Node*temp= new Node();
    if(temp==NULL){
        cout<<"Queue is over flow"<<endl;

    }
    else{
        temp->data=data;
        temp->next=NULL;
        if(front==NULL){
            front=temp;
            rear=temp;
        }
        else{
            rear->next=temp;
            rear=temp;
        }
    }


}
// funciton of dequee the elements in queue

int dequee(Node *& front){
    Node* temp= new Node();
    int x=-1;
    if(front==NULL){
        cout<<"The Queue is underflow"<<endl;

    }
    else{
        temp = front;
        x = front->data;
        front = front->next;
        delete temp;
    }
    return x;
}

// fuction for delting front of the queue;

void display(Node*&front){
Node*new_node= new Node();
new_node=front;

while(new_node!=NULL){
    cout<<new_node->data<<endl;
    new_node=new_node->next;
}

cout<<" "<<endl;
}



int main(){
    Node*front=new Node();
    Node* rear=new Node();
front=NULL;
rear=NULL;
    enquee(front,rear,30);
    enquee(front,rear,50);
    enquee(front,rear,60);
    enquee(front,rear,70);
    enquee(front,rear,80);
    display(front);
     dequee(front);
      display(front);
     dequee(front);
      display(front);
     dequee(front);
      display(front);
     dequee(front);
      display(front);
     dequee(front);
      display(front);
     dequee(front);
      display(front);
     dequee(front);

    return 0;
}