#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

void swapAlternate(int arr[], int n){
    for(int i=0; i<n; i+=2){
        if(i+1 < n){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
     int arr[6]= {3, 2 , 4 ,5, 8,9};
     swapAlternate(arr,6);
     printArray(arr , 6);
    
    return 0;


}