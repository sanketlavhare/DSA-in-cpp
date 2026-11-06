#include<iostream>
#include<climits>

using namespace std;
int main(){
    int nums[] = {12, 15, 2, 32, 145, 150};
    int size = sizeof(nums)/4;

    int largest = INT_MIN;
    for (int i=0; i < size; i++){
        if(nums[i] > largest){
            largest = nums[i];
        }
    }
    cout << "Largest in the Array: " << largest << endl;
}