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
    //wave print
    for(int col=0;col<n;col++){
        if(col%2==0){
            //even column . top down
            for(int row=0;row<m;row++){
                cout<<a[row][col]<<" ";
            }
        }else{
            for(int row=m-1;row>=0;row--){
                cout<<a[row][col]<<" ";
            }
        }
    }
    return 0;

}
