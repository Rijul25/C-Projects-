#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;

    //constrcutor
    Node(int data){
        this->data = data;
    }
};

void push(Node*&head,int data){
    Node* ptr1 = new Node(data);
    Node* temp = head;
    ptr1->next = head;
    //ptr new node hai
    if(head!=NULL){
        while(temp->next!=head){
            //jab tak hum end mei nahi aa jaate
            temp = temp->next;
        }
        temp->next = ptr1;
    }
    else{
        ptr1->next = ptr1;
        //agar head null hai toh.
    }
    head = ptr1;
}
void printlist(Node *head){
    Node* temp = head;
    while(temp->next!=head){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    //now we have reached the last node so usko bhi print karna hai.
    cout<<temp->data<< " END " ; 
}

int main() {
    Node *head = NULL;
    push(head,10);
    push(head,20);
    push(head,30);
    push(head,40);
    printlist(head);
    
}
