#include<iostream>
using namespace std;

int temp;

void InsertionSort(int *arr, int size){
    for(int i=1; i<size; i++){
        int curr = arr[i];
        int j = i - 1;

        while (j >= 0 && curr < arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = curr;
    }
    
    for(int k=0; k<size; k++){
        cout<<arr[k]<<" ";
    }
}

int main(){
    int arr[] = {1, 4,3};
    int size = 3;

    InsertionSort(arr, size);

    
}