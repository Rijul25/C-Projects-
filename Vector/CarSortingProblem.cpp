#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int,int>p1 , pair<int,int>p2){
    int d1 = p1.first*p1.first + p1.second*p1.second;
    // this is x1 square + y1 square.
    int d2 = p2.first*p2.first + p2.second*p2.second;
    // this is x2 square + y2 square.
    if(d1==d2){
        //same distance hai origin se then return the car which has lessser x coordinate.
        return p1.first<p2.first;

    }
    return d1<d2;
}
int main() {
    int n;
    cin>>n;

    vector<pair<int,int> > v;

    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end(),compare);
    //for each loop
    for(auto p:v){
        cout<<"car"<<p.first<<","<<p.second<<endl;
    }
    return 0;
}
