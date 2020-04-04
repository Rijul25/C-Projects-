#include <iostream>
#include <vector>

using namespace std;
int main() {

    vector<int> d{1,10,50,78,32};
    d.push_back(16);

    for(int x:d){
        cout<<x<<" ";
    }
    cout<<endl;
    //v.pop_back();
    //insert some elements in the middle
    d.insert(d.begin()+3,4,100);
    for(int x:d){
        cout<<x<<" ";
    }
    cout<<endl;

    //d.erase(d.begin());

    //size
    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;
    //we avoid the shrink operation
    d.resize(18);

    //clear
    d.clear();
    //this empties the vector but does not remove the memory occuiped by the vector.
    //Reserve memory
    vector<int> r;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int no;
        cin>>no;
        r.push_back(no);
    }

    for(x:r){
        cout<<x<<" ";
    }

}
