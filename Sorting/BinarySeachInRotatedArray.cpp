#include <iostream>
using namespace std;

int searchIN(int a[] , int s , int e , int key){
    //Base case
    if(s>e){
        return -1;
    }

    //Recursive Case
    int mid = (s+e)/2;
    if(a[mid]==key){
        return key;
    }

    //Left part
    if(a[s]<=a[mid]){
        if(key>=a[s] && key<=a[mid]){
            return searchIN(a,s,mid-1,key);
        }
        else{
            return searchIN(a,mid+1,e,key);
        }
    }

    //if mid lies on the right line.
    if(key>=a[mid] && key<=a[e]){
        return searchIN(a,mid+1,e,key);

    }
    return searchIN(a,s,mid-1,key);
    
}
int main() {
    int a[] = {5,6,7,1,2,3,4};
    int key;
    cin>>key;

    cout<<"Element present at index "<< searchIN(a,0,6,key);

    return 0;
}
