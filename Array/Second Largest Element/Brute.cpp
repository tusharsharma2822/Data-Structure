#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> nums){
    int result = 0;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int largest = nums[n-1];
    for(int i=n-2;i>=0;i--){
        if(nums[i] != largest){
            result = nums[i];
            break;
        }
    }
    return result;
}

int main(int argc, char const *argv[])
{
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;

    vector<int> nums(size);

    for(int i=0;i<size;i++){
        cin >> nums[i];
    }

    int result = secondLargest(nums);
    
    cout << "The second largest element present in an array is: " << result;

    return 0;
}
