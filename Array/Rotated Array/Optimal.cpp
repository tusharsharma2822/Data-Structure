#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> nums){
    for(int i=1;i<nums.size();i++){
        if(nums[i-1] > nums[i]){
            return false;
        }
    }
    return true;
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

    bool result = isSorted(nums);

    cout << "Is the array is sorted? " << result;

    return 0;
}
