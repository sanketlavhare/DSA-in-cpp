#include <iostream>
using namespace std;

int main(){

char ch;
    cout<<"Enter Character: \n";
    cin>>ch;
    if(ch >= 'a' && ch <= 'z'){
        cout<<"Character is Lowercase \n";
    }else if(ch >= 'A' && ch <= 'Z'){
        cout<<("Character is Uppercase \n");
    }else{
        cout<<"Invalid Format! \n";
    }
    return 0;
}