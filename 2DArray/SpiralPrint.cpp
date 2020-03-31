#include <iostream>
using namespace std;

void spiralprint(int a[][1000],int m , int n){
    int start_row = 0;
    int end_row = m-1;
    int start_col = 0;
    int end_col = n-1;

    while(start_row<=end_row and start_col<=end_col){
        //first row
        for(int i=start_col;i<=end_col;i++){
            cout<<a[start_row][i]<<" ";
        }
        start_row++;
        //first column
        for(int i=start_row;i<=end_row;i++){
            cout<<a[i][end_col]<<" ";
        }
        end_col--;
        //bottom row
        for(int i=end_col;i>=start_col;i--){
            cout<<a[end_row][i]<<" ";
        }
        end_row--;
        //start column
        for(int i=end_row;i>=start_row;i--){
            cout<<a[i][start_col]<<" ";
        }
        start_col++;
    }

}
int main() {

    int a[1000][1000] = {0};
    int val =  1;
    int m,n;
    cin>>m>>n;
    for(int row=0;row<=m-1;row++){
        for(int col=0;col<=n-1;col++){
            a[row][col] = val;
            val++;
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
    spiralprint(a,m,n);
    
    return 0;
}

