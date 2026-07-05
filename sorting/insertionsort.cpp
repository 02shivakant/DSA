#include <iostream>
using namespace std;

void insertionSort(int arr[] , int n){
    for(int i =1; i<n; i++){
        int key = arr[i];
        int j = i -1;
        while(j >=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;

  
}
}
  void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
  }
int main(){
    int arr[5] = {9 , 7 ,1, 10 , 3};
    int n = 5;
    insertionSort(arr , n);
    printArray(arr , n);
}
