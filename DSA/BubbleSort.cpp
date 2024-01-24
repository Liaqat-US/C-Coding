#include<iostream>
using namespace std;

int temp;

void BubbleSort(int *arr, int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<size - 1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    for(int k=0; k<size; k++){
        cout<<arr[k]<<" ";
    }
}

int main(){
    int arr[] = {1, 4, 3, 5, 2};
    int size = 5;

    BubbleSort(arr, size);

    
}