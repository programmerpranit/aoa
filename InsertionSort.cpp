#include <bits/stdc++.h>
using namespace std;

int main() {

    // cout<<"Enter Array of 5 Elements";
    int n = 5;
    int arr [n];

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    // main code 
    for(int i=0; i<n; i++){
        int current = arr[i];
        int j = i - 1;
        
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1] = current;
    }



    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}
