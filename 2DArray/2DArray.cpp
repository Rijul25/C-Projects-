#include <iostream>
using namespace std;
int main() {

    int a[1000][1000] = {0};
    int val = 1;
    int m,n;
    cin>>m>>n;
    for(int row=0;row<=m-1;row++){
        for(int col=0;col<=n-1;col++){
            a[row][col] = val;
            val++;
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<"Hello World!";
}
