#include <iostream>
using namespace std;

void InsertionSort(int arr[] , int n){
    for(int i=1;i<=n-1;i++){
        // first already sorted hai .
        //current element is a[i] .
        int e = arr[i];
        //place the current element at the right position.
        int j = i-1;
        while(j>=0 and arr[j]>e){
            arr[j+1] = arr[j];
            j = j-1;
        }
        //jab aisa nahi hai matlab for ex 5 hai jo ki 6 se chota hai to 5 pe j tha , to ab 5 ke next block mei 6 daalde .ex tha [5,7,8,9][6] 
        //5,7,8,9 sorted hai.
        // j , 9 pe hai aur a[i] =6 = e. 
        arr[j+1] = e;
    }
    
} 

int main() {

    int n,key;
    cin>>n;
    int a[1000];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    InsertionSort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0 ;
    
}
