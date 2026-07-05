#include <iostream>
using namespace std;
void charArr(char ch[],int n){
    
    cout<<"enter your name:";
    cin>>ch;

    cout<<"your name is:";
    cout<<ch;
    

}
int getLength(char ch[]){
    int count=0;
    for(int i =0; ch[i] != '\0';i++){
        count++;
    }
    return count;
}
int main(){
    
    char ch[10];
    charArr(ch,10);
    cout<<endl;
   cout<<"Length is:"<<getLength(ch);
    return 0;
}
 