#include <iostream>
using namespace std;

void selectionSort(int a[] , int n){
    for(int i=0;i<n-1;i++){
        //Assume the current element as i.
        int minIndex = i;
        //Min element in remaining part
        for(int j=i+1;j<n;j++){
            if(a[j]<a[minIndex]){
                minIndex = j;
            }
        }

        //update the minimum element
        swap(a[minIndex],a[i]);
    }
}
int main() {
    int a[] = {5 , 4 , 1 , 8 , 2};
    int n=5;
    selectionSort(a,n);
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    return 0;
    
}
