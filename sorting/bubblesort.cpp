#include <iostream>
using namespace std;

void bubbleSort(int arr[] , int n){
    bool check = 1;
    for(int i =0; i<n; i++){
        for(int j = 0 ; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
                check = 0;
            }
           
        }
        if (check==1){
                cout<<"already sorted";
                break;
            }
    }
  
}
  void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
  }
int main(){
    int arr[5] = {1, 2,3 ,7,8};
    int n = 5;
    bubbleSort(arr , n);
    printArray(arr , n);
}
