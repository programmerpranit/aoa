#include <iostream>
using namespace std;

bool isSafe(int** arr, int x, int y, int n){

    for(int i=0 ; i<=y; i++){
        if(arr[x][i]==1){
            return false;
        }
    }

    int row = y;
    int col = x;

    // top left
    while(row>=0 && col>=0){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col--;
    }

    // top right
    while(row>=0 && col<n){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col++;
    }

    return true;

}


bool nQueen(int** arr, int y, int n){

    if(y>=n){
        return true;
    }

    for(int i=0; i<n; i++){

        if (isSafe(arr, i, y, n)){
            arr[i][y] = 1;

            if(nQueen(arr, y+1, n)){
                return true;
            }
            arr[i][y] = 0; // backtrack
        }


    }
    return false;

}


int main(){
    
    int n;
    cin>>n;

    int** arr = new int*[n];

    for(int i=0; i<n; i++){
        arr[i] = new int [n];
        for (int j=0; j<n; j++){
            arr[i][j]=0;
        }
    }

    if(nQueen(arr, 0, n)){
        for(int i = 0; i<n; i++){
            for (int j=0; j<n; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }


    return 0;
}