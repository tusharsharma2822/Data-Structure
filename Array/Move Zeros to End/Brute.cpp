#include<bits/stdc++.h>
using namespace std;

void moveZeros(vector<int> nums){
    vector<int> temp;
    for (int i = 0; i < nums.size(); i++){
        if (nums[i] != 0){
            temp.push_back(nums[i]);
        }
    }
    for(int i=0;i<temp.size();i++){
        nums[i] = temp[i];
    }
    for (int i = temp.size(); i < nums.size(); i++){
        nums[i] = 0;
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
    for (int i = 0; i < size; i++){
        cin >> nums[i];
    }

    moveZeros(nums);
    
    return 0;
}
