#include <iostream>
using namespace std;
void charArr(char ch[],int n){
    
    cout<<"enter your name:";
    cin>>ch;

    cout<<"your name is:";
    cout<<ch;
    

}
void reverse(char ch[], int n){
    int s = 0;
    int e =n-1;
    while(s<e){
        swap(ch[s++],ch[e--]);
    }
    cout<<"reversed string is :"<<ch;
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
    int len = getLength(ch);
   cout<<"Length is:"<<len;
   reverse(ch,len);
    return 0;
}
 