#include <iostream>
using namespace std;

int fact(int num){
    int result = 1 , i;
    for(i=1; i<=num; i++){
        result= result*i;
    }
    return result;
}
int main(){
    int a;
    cout<<"enter value"<<endl;
    cin >> a;
    cout<<"output is:"<<fact(a)<<endl;

    
}