#include <iostream>
using namespace std;
    float Squareroot(int number , int p){
        int s=0, e=number;
        float ans;
        int mid;

        while(s<=e){
            mid = (s+e)/2;

            if(mid*mid==number){
                ans = mid;
                break;

            }
            if(mid*mid<number){
                //right me aana hai.
                s = mid+1;
                ans = mid;
            }
            else{
                e = mid - 1;
            }


        }

        //Fractional part
        float inc = 0.1;
        for(int i=0;i<p;i++){

            while(ans*ans<=number){

                ans += inc;
            }
            //else when ans*ans>number
            ans = ans - inc;
            inc = inc / 10;
        }
        return ans;

    }

int main() {
    cout<<Squareroot(49,1)<<endl;
    cout<<Squareroot(10,3)<<endl;

    return 0;
}
