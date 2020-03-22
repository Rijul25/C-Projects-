#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    int arr[1000];
    int maxsum=0;
    int cumsum[1000]={0};
    int cursum=0;

    int left= -1;
    int right = -1;
    cin>>arr[0];
    cumsum[0]=arr[0];

    for(int i=0;i<n;i++){
        cin>>arr[i];

        cumsum[i] = cumsum[i-1]+arr[i]; //cumilative sum nikala hai. wo boxes bante hau jo neeche.
    }

    //Generate all sub arrays 
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cursum=0;
            cursum = cumsum[j] - cumsum[i-1];
           
            if(cursum>maxsum){
                maxsum=cursum; //agar zyaada hai to max sum update kar diya.
                left = i;
                right = j;
            }
        }
    }

//Print the sub array
cout<<"Maximum sum is "<<maxsum<<endl;

//Print the subarray
for(int k=left;k<=right;k++){
    cout<<arr[k]<<" ";
}
}
