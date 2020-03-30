#include <iostream>
#include<cstring>
using namespace std;

void removeDuplicates(char a[]){
    int length = strlen(a);
    if(length==0 or length==1){
        return;
        //kuch mat kar.
    }
    int prev = 0;
    for(int current=1;current<length;current++){
        if(a[current]!=a[prev]){
            prev++;
            a[prev]=a[current];
        }
    }
    a[prev+1] = '\0';
    return;

}
int main() {
    char a[1000];
    cin.getline(a,1000);
    removeDuplicates(a);
    cout<<a;
}
