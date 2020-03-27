#include <iostream>
using namespace std;
int main() {

    int a[] = {1,3,4,2,7,8};
    int n=sizeof(a)/sizeof(int);
    
    //check for every even element and try to create a peak.
    for(int i=0;i<n;i+=2){

        //check the left element 
        if(i>0 && a[i-1]>a[i]){
            swap(a[i],a[i-1]);
            //matlab jaise 4,3 hai to 3 2nd element hai aur yaha peak create karni hai.
        }

        //check for the right element.
        if(i<=n-2 && a[i+1]>a[i]){
            swap(a[i],a[i+1]);
            //n-2 isiliye kyunki last eleemnt check nahi karna. sirf event waale check karne hai . last pe apne aap aa jayega.
        }
    }

    //print the array
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
