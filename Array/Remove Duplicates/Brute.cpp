#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> nums){
    set<int> st;
    for(int i=0;i<nums.size();i++){
        st.insert(nums[i]);
    }

    int index = 0;
    for(auto it : st){
        nums[index] = it;
        index += 1;
    }

    return st.size();
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

    int result = removeDuplicates(nums);

    cout << "The size of an array after the modifications is: " << result;
    
    return 0;
}