#include <iostream>
using namespace std;


void swap(int arr[], int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void insertionSort(int arr[], int n) {

    for(int i=1; i<n; i++) {
        int current = arr[i];
        int j = i-1;
        while(current<arr[j] && j>=0){
            swap(arr, j ,j+1);
            j--;
        }
    }
}

void selectionSort(int arr[], int n){

    for(int i=0; i<n-1; i++) {
        int min = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]< arr[min]){
                min = j;
            }
        }
        swap(arr, min, i);

    }

}


int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low-1;

    for(int j = low; j<high; j++){
        if(arr[j]< pivot){
            i++;
            swap(arr, i, j);
        }
    }

    swap(arr, i+1, high);

    return i++;
}


void quickSort(int arr[], int low, int high){
    
    if(low<high){
        int pivot = partition(arr, low, high);

        quickSort(arr, low, pivot-1);
        quickSort(arr, pivot+1, high);
    }

}



int main() {

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quickSort(arr, 0, n-1);

    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    
    }
}
