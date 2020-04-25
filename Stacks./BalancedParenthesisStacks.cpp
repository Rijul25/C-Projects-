#include <iostream>
#include<stack>
using namespace std;

bool checkexpression(string str){
    stack<char> s;
    for(int i=0;i<str.size();i++){
        char currentchar = str[i];
        if(currentchar=='('){
            s.push(currentchar);
        }
        else if (currentchar==')'){
            if(s.empty() || s.top()!='('){
                return false;
            }
            s.pop();
            //varna pop karde.agar bacha hua character ( nahi hai ya fir empty hai to.
        }
    }

    return s.empty();
    //ans de agar stack khali hai toh.
}

int main() {
    string expr;
    cin>>expr;

    bool isvalid = checkexpression(expr);
    cout<< isvalid;
    return 0;
}
