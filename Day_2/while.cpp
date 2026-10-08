#include <iostream>

using namespace std;

int main(){
    int n;
    int i=1;
    int sum=0;
    cout << "Enter num: ";
    cin >> n ;
    while (i<=n && i/2!=0){
        sum += i;
        i++;
        cout << sum << " ";
    }
return 0;
}