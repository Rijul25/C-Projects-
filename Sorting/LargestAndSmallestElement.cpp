#include <iostream>
#include<climits>
using namespace std;

int main() {
    int n , key;
    cin>>n;

    int a[1000];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //Largest and smallest element in an array.
    int largest = INT_MIN;
    int smallest = INT_MAX;
    //this is done using climits.
    for(int i=0;i<n;i++){
        if(a[i]>largest){
            largest = a[i];
        }
        if(a[i]<smallest){
            smallest = a[i];
        }
    }
    cout<<"Largest is  "<<largest<<endl;
    cout<<"Smallest is "<<smallest<<endl;
    return 0;

}
