#include <iostream>
using namespace std;
int main(){
     int n;
     cout << "enter the times you want print:";
     cin >> n;
     for(int i=0; i<=n ; i++){
        cout << "hello Mr.Shiva..." << endl;
     }
     while (n>0)
     {
        cout<< "i am  WHILE loop"<< endl;
        n--;
        
     }
    //  from here value of n is 0 still code will run one time 
     do
     {
        cout<< "helloo I am do while loop";
     } while (n>0);
     cout<<"value of n is :"<< n;
     
     return 0;
}