#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}
int nCr(int n, int r){
    // coef = factorial(n)/factorial(r)*factorial(n-r)
    int factorial_n = factorial(n);
    int factorial_r = factorial(r);
    int factorial_nmr = factorial(n-r);

    return factorial_n/(factorial_r * factorial_nmr);
}
int main(){
    int n = 8;
    int r = 2;
    cout << nCr(n, r) << endl;
    return 0;
    
}