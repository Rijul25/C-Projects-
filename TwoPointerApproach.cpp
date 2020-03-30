#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    int a[] = {1,3,5,7,10,11,12,13};
    int sum = 16;

    int i=0;
    int j = sizeof(a)/sizeof(int) - 1 ;
    //j points to the last element.
    while(i<j){
        int current_sum = a[i] + a[j];
        if(current_sum>sum){
            j--;
        }
        if(current_sum<sum){
            i++;
        }
        else if(current_sum==sum) {   
            cout<<a[i] <<"and "<< a[j] <<endl;
            i++;
            j--;

        }
    }
    
    return 0;
}
