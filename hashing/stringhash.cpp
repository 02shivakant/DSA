#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int main(){
    string str = "aaabbcdd";
    int freq[26] = {0};
    for(char s : str){
        freq[s - 'a']++;
    }
    for(int i =0; i<26 ; i++){
        if(freq[i]>0){
            cout<<char(i + 'a') << "->" << freq[i] << endl;
        }
    }
    return 0;


}