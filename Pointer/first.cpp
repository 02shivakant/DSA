#include <iostream>
using namespace std;
int main(){
    int n = 5;
    cout<<"add of number: "<<&n<<endl;
    int *ptr = &n;
    cout<<"ptr value: "<<*ptr<<endl;
    cout<<"add from pointer: "<<ptr<<endl;
    cout<<"size of pointer"<<sizeof(ptr)<<endl;
    float f = 6.2;
    float *p = &f;
    cout<<"size of pointer f is "<<sizeof(p)<<endl;
    cout << sizeof(void*);


    return 0;
}