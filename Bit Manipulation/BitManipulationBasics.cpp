#include <iostream>
using namespace std;

bool isodd(int n){
    return (n&1);
}
int getbit(int n , int i){
    int mask = (1<<i);
    int bit = (n & mask)>0 ? 1 : 0;
    return bit;
}
void clearbit(int &n , int i){
    int mask = ~(1<<i);
    n = n&mask;
}
int setbit( int n , int i){
    int mask = (1<<i);
    int ans = n|mask;
    return ans;
}
void update_bit(int &n , int i ,int value){
    int mask = ~(1<<i);
    int cleared_n = n & mask;
     n = cleared_n|(v<<i); 
}
int clearLastIBits(int n, int i , int j){
    int mask = (-1<<i);
    return n & mask;
    //here i is not the index but the number of bits which you want to remove.

}

int ClearRangeIToJ(int n , int i , int j){
    int ones = (~0);
    int a = ones<<(j+1);
    int b = (1<<i)-1;
    int mask = a|b;
    int ans = n&mask;
    return ans;
}

int main() {
    int n=5;
    int i;
    cin>>i;
    //cout<<getbit(n,i)<<endl;
    //cout<<isodd(n)<<endl;
    //cout<<"Hello World!";
    //int r = 0;
    //r = setbit(n,i);
    // here i =3 so answer= 15 . so ihave set the 3rd bit of 5 . so now the answer is 1.
   // cout<<"Answer"<<r<<endl;
    clearbit(n,i);
    cout<<n<<endl;
    return 0;
}
