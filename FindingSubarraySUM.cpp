#include <iostream>
using namespace std;
int main() {

int n;
cin>>n;
int currentsum=0;
int maxsum=0;
int leftmost = -1;
int rightmost = -1;

int arr[1000];

for(int i=0;i<n;i++){
    cin>>arr[i];
}
//Generate all sub arrays 

for (int i=0;i<n;i++){

    for(int j=i;j<n;j++){

        currentsum=0;

        for(int k=i;k<=j;k++){

            currentsum+=arr[k];

        }
        if(currentsum>maxsum){
            maxsum=currentsum;
            leftmost=i;
            rightmost=j;

        }
    }
}
cout<<"Maximum sum is "<<maxsum<<endl;

for(int k=leftmost;k<=rightmost;k++){
    cout<<arr[k]<<" ";
}
return 0;
}
