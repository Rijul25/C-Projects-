#include <iostream>
using namespace std;

int main() {
    int n , key;
    cin>>n;

    int a[1000];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>key;
    int i;
    for(i=0;i<=n-1;i++){
        if(a[i]==key){
            cout<<"Element found at "<< i << "index";
            break;
        }
    }
    if(i==n){
        cout<<"Key is not present";
    }
    return 0;

}
