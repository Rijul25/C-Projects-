#include <iostream>
using namespace std;

class node{
public:
    int data;
    node* next;

    //constrcutor
    node(int d){
        data = d;
        next = NULL;
    }

};
//pass the head pointer by reference not by value.
void insertAtHead(node*&head,int data){
    node*n = new node(data);
    n->next = head;
    head = n;

}
int length(node*head){
    int len = 0;
    while(head!=NULL){
        head = head->next;
        len+= 1;
    }
    return len;
}
void insertAtTail(node*&head,int data){
    if(head==NULL){
        //create a new node
        head = new node(data);
        return;
    }
    //tail starting mei point ho rahi hai
    node*tail = head;
    while(tail->next!=NULL){
        tail = tail->next;
        //jab tak tail ka next null ko point nahi karta tab tak hum last mei nahi pahunche hai.
    }
    //ab hum last node pe hai to nayi node create karde.
    tail->next = new node(data);
    return;
}

void insertAtMiddle(node*&head , int data, int position){
    if(head==NULL||position==0){
        insertAtHead(head,data);
        //agar position 0 hai ya fir head kisiko point he nahi kar raha then head pe insert kar.
    }
    else if(position>length(head)){
        insertAtTail(head,data);
        //agar positon lenght se zyaada hai to hum end mei hai
    }
    else{
        //insert in the middle
        //take p-1 jumps
        int jump = 1;
        node*temp = head;
        while(jump<=position-1){
            temp = temp->next;
            jump += 1;
        }
        //now we are at the position so write the code to insert
        node*n = new node(data);
        n->next = temp->next;
        //n ka next hai wahi temp ke next ko point karwa.
        //temp ka jo next hai use n pe point karwa de.
        temp->next = n;
    }
}


void print(node*head){
    node*temp = head;
    //head ko point karwaya 
    while(temp!=NULL){
        //jab tak temp null ko pointnahi karta tab tak data print karwa aur next pe bhejde because node mei
        //next pe he hai agle node ka adress. next hai jo wo agle node ka adress store karta hai
        //to fir temp. next node pe chala jayega and uska data print kar dega.
        cout<<temp->data<<"->";
        temp = temp->next;

    }
    cout<<endl;
}

void deleteAtHead(node*&head){
    if(head==NULL){
        return;
    }
    node*temp = head;
    head = head->next;
    delete temp;
    return;
}
void deleteAtTail(node*&head){
    node*prev = NULL;
    node*temp = head;

    while(temp->next!=NULL){
        prev = temp;
        temp = temp->next;
    }
    //previous temp se 1 block peeche rahega
    delete temp;
    prev->next = NULL;
    return;
}

bool searchRecursive(node*head,int key){
    if(head==NULL){
        return false;
    }
    if(head->data==key){
        return true;
    }
    else{
        return searchRecursive(head->next,key);
    }
}

bool searchIterative(node*head,int key){
    while(head!=NULL){
        if(head->data==key){
            return true;
        }
        head = head->next;
    }
    return false;
}

void buildList(node*&head){
    int data;
    cin>>data;
    //ab jab tak -1 nahi mil jaata tab tak check kar
    while(data!= -1){
        insertAtTail(head,data);
        cin>>data;
    }
}
istream& operator>>(istream &is,node*&head){
    buildList(head);
    return is;
}
ostream& operator<<(ostream &os,node*&head){
    print(head);
    return os;
}

void reverse(node*&head){
    node*C = head;
    node*P = NULL;
    node*N;

    while(C!=NULL){
        //first save the next node
        N = C->next;
        //now make cureent point to previous tabhi reverse chalega.
        C->next = P;
        //now update the current and previous.
        P = C;
        C = N;
    }
    head = P;
}

node* reverseRecursion(node*head){
    //base case
    if(head->next==NULL||head==NULL){
        //matlab ek he node hai aur wo kisiko point nahi kar raha then
        return head;
    }
    //rec case
    node*smallHead = reverseRecursion(head->next);
    //chote waale recursion bubble ka head.
    node*C = head;
    //current head.
    C->next->next = C;
    //basically c ke next ke next = 2nd blocks. usko c ko point karwana hai.
    //aur ab current node ka jo next hoa wo null ko point karega.
    C->next = NULL;
    return smallHead;
}

node* midpoint(node*head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    node*slow = head;
    node*fast = head->next;
    while(fast!=NULL && fast->next!=NULL){
        //fast ka next ka next null ho sakta hai aur kuch nahi.
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

node* merge(node*a,node*b){
    if(a==NULL){
        return b;
        //the non empty list is the asnwer.
    }
    if(b==NULL){
        return a;
    }
    node*c;
    //compare a and b for smaller element
    if(a->data < b->data){
        c = a;
        c->next = merge(a->next,b);
    }
    else{
        c = b;
        c->next = merge(a,b->next);
    }
    return c;
}

node* mergesort(node*head){
    //Base case
    if(head==NULL||head->next==NULL){
        return head;
    }
    //Rec case
    //1.Find midpoint
    node*mid = midpoint(head);
    node*a = head;
    node*b = mid->next;
    // ab do linked lists ban gayi.
    //ab inko alag karde
    mid->next = NULL;

    //2.Now recursively sort
    a = mergesort(a);
    b = mergesort(b);

    //merge the linkedn lists
    node* c = merge(a,b);
    return c;
}
bool detectCycle(node*head){
    node*slow = head;
    node*fast = head;

    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;

        if(fast==slow){
            return true;
            //cycle hai
        }
    }
    return false;
}

int main() {
    node*head = NULL;
    node*head2 = NULL;

    cin>>head>>head2;
    cout<<head<<endl<<head2;
    
    // reverse(head);
    // print(head);

    // node*m = midpoint(head);
    // cout<<m->data;

    head = merge(head,head2);
    cout<<head;
    return 0;
}
