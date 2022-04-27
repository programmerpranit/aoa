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
    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i; j<n; j++){
            if (arr[j] < arr[min]){
                min = j;
            }
        }

        // swap
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    for(int i=0; i<n; i++) {
        cout<<arr[i];
    }
    

    return 0;
}
