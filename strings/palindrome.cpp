#include <iostream>
using namespace std;
bool isPalindrome(char ch[], int n ){
    int l =0;
    int r=n-1;
    while(l<r){
        if(ch[l]!=ch[r]) return false;
        else l++,r--;
    }
    return true;
}
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
    int len = getLength(ch);
   cout<<"Length is:"<<len;
   cout<<"Palindrome or not : "<<isPalindrome(ch,len);
    return 0;
}
 