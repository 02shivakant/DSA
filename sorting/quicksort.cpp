#include <iostream>
#include <vector>
using namespace std;

int partFunction(vector<int>&arr , int left , int high){
    int pivot = arr[left];
    int i = left;
    int j = high;
    while(i<j){
        while(arr[i]<=pivot && i<= high - 1){
            i++;
        }
        while(arr[j]  > pivot && j >= left){
            j--;
        }
        if (i < j ) swap(arr[i] , arr[j]);
    }
    swap(arr[left] , arr[j]);
    return j;

}

void qs(vector<int>&arr , int left , int high){
    if (left<high){
        int sepIndex = partFunction(arr,left,high);
        qs(arr, left, sepIndex-1);
        qs(arr , sepIndex+1 , high);
    }
}



int main(){
    vector<int>arr={2,1,5,6,3};
    int n = arr.size();
    qs(arr, 0 , n-1);
    for (int i =0; i<=n-1;i++){
        cout<<arr[i]<<" ";
    }

}