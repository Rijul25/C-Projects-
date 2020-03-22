#include <iostream>
using namespace std;
int kadane(int a[] , int n){

    int max_so_far = 0;
    int max_ending = 0;

    for(int i=0; i<n; i++){
        max_ending += a[i];
        if(max_ending<0){
            max_ending = 0;
        }

        if(max_so_far<max_ending){
            max_so_far = max_ending;
        }
        return max_so_far;
    }
}


int max_circular_sum(int a[], int n){
    int max_kadane = kadane(a,n);
    int max_wrap =0;
    for(int i=0;i<n;i++){
        max_wrap += a[i];
        a[i] = -a[i];
    }
    //max subarray sum will be 
    // array_sum - (- max subarray sum of )
    max_wrap = max_wrap + kadane(a,n);

    return (max_wrap > max_kadane)? max_wrap : max_kadane;

}
int main() {
    int a[] = {10 , -3 , -4 , 7 , 6 , 5 , -4 , -1};

    int n = sizeof(a)/sizeof(a[0]);

    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        cout<<max_circular_sum(a,n);
    }
    return 0;
    
}