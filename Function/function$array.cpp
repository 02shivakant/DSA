#include <iostream>
 using namespace std;

 int newFunction(int num){
        return num*num;
 }
  int main(){
       int x=5 , arr2[5];
        int ootput= newFunction(x);
        cout << "square of "<< x << "is : "   << ootput << endl; 
    int arr[]={16,27,39,48,15};
    for(int i=0; i<5; i++){
        cout<<arr[i]<<"\n";
    }
    cout<<"input if second arr is :"<< endl;

    for(int i=0; i<5;i++){
        cin >> arr2[i];
    }
   
    
   cout<<"your second array is ";
   for(int i=0; i<5;i++){
        cout<<arr[i] << " ";
    }
    
    

    return 0;
  }