#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    int arr[1000];
    int cs=0;
    int ms=0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Kadane Algo

    for(int i=0;i<n;i++){
        cs = cs + arr[i];
        if(cs<0){
            cs=0;
        }
        ms = max(cs,ms);
    }
    cout<<"Maximum sum is "<<ms<<endl;

    return 0;
}
