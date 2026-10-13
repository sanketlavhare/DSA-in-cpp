#include<iostream>
using namespace std;

int Sum(int num){
    int digit=0;
    while(num>0){
        int LastDigit = num%10;
                  num = num/10;
                  digit += LastDigit;
    }
    return digit; 
}
int main(){

    cout << Sum(145);

    return 0;
}