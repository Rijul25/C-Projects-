#include <iostream>
#include <vector>
using namespace std;
int main() {

    vector <int> a;
    vector <int> b(5,10); // 5 numbers with a value of 5.
    vector <int> c(b.begin(),b.end());
    vector <int> d{1,2,3,10,14};

    for(int i=0;i<c.size();i++){
        cout<<c[i]<<" ";
    }
    for(auto it = b.begin();it!=b.end();it++){
        cout<<(*it)<<endl;
    }

    for(int x:d){
        cout<<x<<" ";
        //for each element that belongs in d.
    }
    //more fucntions
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int no;
        cin>>no;
        v.push_back(no);
    }
    for(int x:v){
        cout<<x<<" ";
    }
    

    cout<<"Hello World!";
}
