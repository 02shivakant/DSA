#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int num=5;
    
    int ans=0;
    int i =0;
    int place= 1;
    while(num!=0){
        int bit = num & 1;
        ans = (bit * place )+ ans;
        place = place *10;
        num = num >> 1;
        i++;

    }

    //  method 2
    //  string binary = " ";
    //  only add in while loop
    //  binary = char((num & 1) + '0') + binary;
    cout<<"your value is "<<ans<<endl;
   

    
}