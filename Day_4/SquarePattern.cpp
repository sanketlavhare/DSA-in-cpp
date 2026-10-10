//Prints numbers in square pattern
#include<iostream>
using namespace std;
int main(){

cout << "Enter no. of Lines: ";
int n;
cin >> n;

int num;
cout << "Enter Number to Print: ";
cin >> num;

for (int i=0; i<n; i++){
    for (int j=0; j<=n; j++){
        cout << num << " ";
        num;
    }
    cout << endl;
}
return 0;
}
