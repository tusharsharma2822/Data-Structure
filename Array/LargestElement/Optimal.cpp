#include<bits/stdc++.h>
using namespace std;

int largestNumber(vector<int> nums){
    int result = nums[0];
    for (int i = 1; i < nums.size(); i++){
        if (nums[i] > result){
            result = nums[i];
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

    int result = largestNumber(nums);

    cout << "The largest Number present in an Array: " << result;

    return 0;
}
