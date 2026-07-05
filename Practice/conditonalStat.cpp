 #include <iostream>
 using namespace std;
  int main(){
    int num=5;
        if(num%2==0){
            cout<<"value is even"<<endl;
        }
        else{
            cout<<"value is odd" << endl;
        }

        cout << (num==5  ? "value is equal to 5": " value is other than 5") ;
        return 0;
  }