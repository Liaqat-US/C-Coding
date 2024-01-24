#include<iostream>
using namespace std;

int temp;

void SelectionSort(int arr[], int size){
    for (size_t i = 0; i < size; i++)
    {
        int smallest = i;

        for (size_t j = i+1; j < size; j++)
        {
            if (arr[smallest] < arr[j])
            {
                smallest = j;
            }
            
        }

        temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;
        
    }

    for (size_t k = 0; k < size; k++)
    {
        cout<<arr[k]<<" ";
    }
    
    
}

int main(){
    int arr[] = {3, 6, 1, 2, 5, 4};
    int size = 6;

    SelectionSort(arr, size);

}