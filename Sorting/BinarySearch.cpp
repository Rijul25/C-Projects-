#include <iostream>
using namespace std;

int binarySearch(int a[] , int n , int key){
    int s=0, e = n-1;
    int mid;

    while(s<=e){
        mid=(s+e)/2;

        if(a[mid]==key){
            //element found
            return mid;
        }
        else if(a[mid]>key){
            //left part mei hai element.
            e = mid-1;
        }
        else{
            s = mid + 1;
        }
    
    }

    return -1;
    //element not present in the array.

}
int main() {
    int a[]={1,3,5,8,10,12,18};
    int n =sizeof(a)/sizeof(int);
    int key;
    cin>>key;
    

    int searchIndex = binarySearch(a,n,key);

    if(searchIndex== -1){
        cout<<"Key is not present"<<endl;
    }
    else{
        cout<<"key present at "<<searchIndex<<endl;
    }
    return 0;
}
