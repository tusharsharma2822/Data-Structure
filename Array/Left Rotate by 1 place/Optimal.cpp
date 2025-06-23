#include<bits/stdc++.h>
using namespace std;

void leftRotate(vector<int> nums){
    int temp = nums[0];
    int n = nums.size();
    for(int i=1;i<n;i++){
        nums[i-1] = nums[i];
    }
    nums[n-1] = temp;
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

    leftRotate(nums);
    
    for(int& i : nums){
        cout << i << " ";
    }

    return 0;
}
