#include<bits/stdc++.h>
using namespace std;

void moveZeros(vector<int> nums){
    int j = -1;
    
    for (int i = 0; i < nums.size(); i++){
        if(nums[i] == 0){
            j = i;
            break;
        }
    }
    
    for(int i = j+1;i<nums.size();j++){
        if(nums[i] != 0){
            swap(nums[i], nums[j]);
            j++;
        }
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
