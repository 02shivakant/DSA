#include <iostream>
using namespace std;

void selectionSort(int arr[] , int n){
    
    for(int i =0; i<n; i++){
        int min = i;
        for(int j = i ; j<n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[i] , arr[min]);
    }
  
}
  void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout<<"\n";
  }
int main(){
    int arr1[5] = {10, 4,3,8,7};
    int arr2[5] = {9, 4,7,8,7};
    int arr3[5] = {10, 4,8,8,7};
    int arr4[5] = {10, 67,3,8,7};
    int arr5[5] = {198, 74,83,8,7};
    int n = 5;
    selectionSort(arr1 , n);
    selectionSort(arr2 , n);
    selectionSort(arr3 , n);
    selectionSort(arr4 , n);
    selectionSort(arr5 , n);
    printArray(arr1 , n);
    printArray(arr2 , n);
    printArray(arr3 , n);
    printArray(arr4 , n);
    printArray(arr5 , n);
}
