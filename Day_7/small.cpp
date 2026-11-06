#include<iostream>
#include<climits>
using namespace std;

int main(){
    int nums[] = {10, 5, 2, 12, 25};
    int size = sizeof(nums) / 4;
    int smallest = INT_MAX;

    for (int i=0; i <= size; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
        }
    }
    cout << "Smallest: " << smallest << endl;
}