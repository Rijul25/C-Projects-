#include <iostream>
#include<list>
using namespace std;
int main() {
    //create a graph data strcuture
    list<pair<int,int> > *l;
    //l is a pointer to the array of lists.

    int n;
    cin>>n;
    l = new list<pair<int,int> >[n];
    //here n means we need n number of linked lists.
    //n is the number of vertices
    int e;
    cin>>e;
    for(int i=0;i<e;i++){
        int x,y,wt;
        cin>>x>>y>>wt;
        l[x].push_back(make_pair(y,wt));
        l[y].push_back(make_pair(x,wt));
    }
    //print the linked lists
    for(int i=0;i<n;i++){
        cout<<"Linked list"<<i<<" ->";
        for(auto xp:l[i]){
            cout<<"("<<xp.first<<","<<xp.second<<","<<")";
        }
        cout<<endl;
    }

    cout<<"Hello World!";
}
