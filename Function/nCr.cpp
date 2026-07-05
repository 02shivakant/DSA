#include <iostream>
using namespace std;

int fact(int num){
    int result = 1 , i;
    for(i=1; i<=num; i++){
        result= result*i;
    }
    return result;
}

int nCr(int n , int r){
    int result=1;
    int nmrtr = fact(n);
    int dnrtr = fact(r) * fact(n-r);
    return nmrtr / dnrtr;
}
int main(){
    int num1 , num2;
    cout<<"enter value of n and r"<<endl;
    cin >> num1 >> num2;
    cout<<"output is:"<<nCr(num1, num2)<<endl;

    
}