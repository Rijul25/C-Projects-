#include <iostream>
#include<stack>
using namespace std;

void printspan(int arr[],int n){
    stack<int> s;
    int ans[100] = {};
    for(int day = 0;day<n;day++){
        int currentprice = arr[day];
        //stack stores the indices  , the array will give us the value
        while(s.empty()==false && arr[s.top()] < currentprice){
            //agar 70<80 to 70 nikal de.
            s.pop();
        }
        int betterday = s.empty() ? 0 : s.top();
        //agar empty hai to pehla din he best tha otherwise abhi wwaala hai.
        int span = day - betterday;
        ans[day] = span;
        //neeche waala jo array bana tha indices minus karke wahi.
        s.push(day);
    }
    //print 
    for(int i=0;i<n;i++){
        cout<< ans[i]<<" ";
    }
}

int main() {
    int n= 7;
    int arr[100] = {100,80,60,70,60,75,85};

    printspan(arr,n);
    return 0;
}
