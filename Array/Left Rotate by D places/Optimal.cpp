#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int> nums, int start, int end){
    while(start < end){
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

void leftRotate(vector<int> nums, int d){
    d = d % nums.size();
    reverse(nums, 0, d-1);
    reverse(nums, d, nums.size()-1);
    reverse(nums, 0, nums.size()-1);

    for (int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
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
