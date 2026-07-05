#include <iostream>
using namespace std;
void inputArr(int arr[], int n){
    cout << " enter elements of array" << endl;
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
}
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}
 void reverseArr( int arr[], int n){
    int start = 0;
    int end = n-1;
    while (start<end){
        swap(arr[start] , arr[end]);
        start ++;
        end--;
    }
    

 }


int main(){
    int arr[5];
    inputArr(arr,5);
    reverseArr(arr, 5);
    cout<<endl;
    printArray(arr,5);
    
    
    return 0;

}