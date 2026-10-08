#include <iostream>

using namespace std;

int main(){
int n;
cout << "Enter No.:- ";
cin >> n ;
bool isPrime=true;
for (int i=2; i<n; i++){
    if(n % i == 0){
        isPrime = false;
    }
    break;
    }
    if(isPrime == true){
        cout << "No is Prime: \n";
    }else if(isPrime == false){
        cout << "No is not Prime: \n";        
    }
    else{
        cout << "Enter valid format..";
    }
    return 0;
}