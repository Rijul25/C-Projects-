#include <iostream>
#include<vector>
using namespace std;


template <typename T>
class Stack{

private:
    vector<T> v;

public:
    void push(T data){
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

    T top(){
        //gives us the last element
        return v[v.size()-1];
        //number of elements -1 is the last element.
    }


};

int main() {

    //stack implemenation using vector
    Stack<char> s;
    for(int i=65;i<=70;i++){
        s.push(i);
    }

    //print
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}
