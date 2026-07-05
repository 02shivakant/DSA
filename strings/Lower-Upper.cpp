#include <iostream>
using namespace std;
char lowerTOupper(char alphabet){
    if(alphabet>='a' && alphabet<='z'){
        return alphabet;
    }
    else{
        return alphabet-'A' + 'a';
    }

}
int main(){
    char a = 'b';
    char b = 'M';
   cout << lowerTOupper(a)<<endl;
   cout << lowerTOupper(b);
    return 0;
}
 