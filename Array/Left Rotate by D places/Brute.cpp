#include<bits/stdc++.h>
using namespace std;

void leftRotate(vector<int> nums, int d){
    vector<int> temp;
    for (int i = 0; i < d; i++){
        temp.push_back(nums[i]);
    }
    for(int i=d;i<nums.size();i++){
        nums[i - d] = nums[i];
    }
    int index = 0;
    for (int i = nums.size() - d; i < nums.size(); i++){
        nums[i] = temp[index - (nums.size() - d)];
    }
    
    for(int i : nums){
        cout << i << " ";
    }
}

int main(int argc, char const *argv[]){
    
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;

    vector<int> nums(size);
    for(int i=0;i<size;i++){
        cin >> nums[i];
    }

    int d;
    cout << "Enter the value of d: ";
    cin >> d; 

    leftRotate(nums, d);

    return 0;
}
