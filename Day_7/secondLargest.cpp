#include<iostream>
#include<climits>
using namespace std;

int main(){
    int nums[] = {120, 50, 130, 256, 25};
    int size = sizeof(nums)/sizeof(nums[0]);

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i=0; i < size; i++){
        if(nums[i] > largest){
            secondLargest = largest;
            largest = nums[i];
        }
        else if(nums[i] > secondLargest && nums[i] != largest){
            secondLargest = nums[i];

        }
    }
    cout << "Largest in array: " << largest << endl;
    cout << "Second Largest in the array: " << secondLargest << endl;
    
    return 0;
}