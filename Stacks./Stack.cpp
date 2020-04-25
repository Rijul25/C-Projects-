#include <iostream>
#include<vector>
using namespace std;

class Stack{

private:
    vector<int> v;

public:
    void push(int data){
        v.push_back(data);
    }
    bool empty(){
        return v.size()==0;
        //return true if size =0;
    }

    void pop(){
        if(!empty()){
            v.pop_back();
        }
    }

    int top(){
        //gives us the last element
        return v[v.size()-1];
        //number of elements -1 is the last element.
    }


};

int main() {

    //stack implemenation using vector
    Stack s;
    for(int i=1;i<=5;i++){
        s.push(i*i);
    }

    //print
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}
