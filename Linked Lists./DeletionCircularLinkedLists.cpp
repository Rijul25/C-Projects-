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

Node* getnode(Node*&head,int data){
    Node* temp = head;
    while(temp->next!=head){
        if(temp->data == data){
            //agar data wahi hai jo humei chahiye then return the adress else temp ko aage badha.
            return temp;
        }
        temp = temp->next;
    }
    if(temp->data==data){
        return temp;
    }
    else{
        return NULL;
    }
}

void deleteNode(Node*&head, int data){
    Node *del = getnode(head,data);
    if(del==NULL){
        cout<<"Node not present"<<endl;
        return;
    }
    if(head==del){
        head = del->next;
    }
    Node *temp = head;
    while(temp->next!=del){
        temp = temp->next;
    }
    //when we reach one node before delete make it point to the node at the right of delete thus deleting the del.
    temp->next = del->next;
    delete del;
}

int main() {
    Node *head = NULL;
    push(head,10);
    push(head,20);
    push(head,30);
    push(head,40);
    push(head,50);
    printlist(head);
    deleteNode(head,30);
    printlist(head);
    
}
