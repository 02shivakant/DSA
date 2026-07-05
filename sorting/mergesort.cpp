#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr , int low , int high , int mid){
int l = low;
int r = mid +1;
vector<int>temp;

while(l<=mid && r <= high){
    if ( arr[l]<=arr[r]){
        temp.push_back(l);
        l++;
    }
    else{
        temp.push_back(r);
        r++;
    }
}
while(l<=mid){
        temp.push_back(l);
        l++;
    
}
while(r<=high){
    temp.push_back(r);
        r++;
}
for(int i=low; i<high;i++){
        arr[i] = temp[ i -low];
    }


}

void ms(vector<int>&arr ,int  low , int high){
    // base Case
    if(low>=high){
        return;
    }
    int mid = (low+high)/2;
    ms(arr,low,mid);
    ms(arr , mid+1, high);
    merge(arr , low , high, mid);


}

int main(){
    vector<int>arr= {8,5,1,9,0,3,4};
    int n = arr.size();
    ms(arr , 0 , n-1);
    for(int i=0; i<n;i++){
        cout<<arr[i];
        cout<<" ";
    }

}