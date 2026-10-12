#include<iostream>
using namespace std;

int Min(int a, int b){
    if(a>b){
        cout << b ;
    }
    else if(a<b){
        cout << a ;
    }
    else if(a=b){
        cout << "Both are equal";
    }
}
int main(){
    Min(10, 50);
    return 0;
}
