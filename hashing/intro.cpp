#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
void hashCreate( vector<int>&arr){
    unordered_map<int,int>freq;
    for(int i =0; i<arr.size(); i++){
        freq[arr[i]]++;
    }
    for(auto it:freq){
        cout<< it.first <<" -->" << it.second<<endl;
    }
}

int main(){
    
    vector<int>arr={2,3,4,3,2};
    hashCreate(arr);


    
    
    
    return 0;


}