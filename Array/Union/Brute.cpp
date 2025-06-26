#include<bits/stdc++.h>
using namespace std;

vector<int> unionArray(vector<int> nums1, vector<int> nums2){
    vector<int> result;
    set<int> st;
    for (int i = 0; i < nums1.size(); i++){
        st.insert(nums1[i]);
    }
    for (int i = 0; i < nums2.size(); i++){
        st.insert(nums2[i]);
    }
    
    for (auto it : st){
       result.push_back(it);
    }
    
    return result;
}

int main() {
    int size1;
    cout << "Enter the size of first array: ";
    cin >> size1;

    vector<int> nums1(size1);
    cout << "Enter elements of first array: ";
    for (int i = 0; i < size1; i++) {
        cin >> nums1[i];
    }

    int size2;
    cout << "Enter the size of second array: ";
    cin >> size2;

    vector<int> nums2(size2);
    cout << "Enter elements of second array: ";
    for (int i = 0; i < size2; i++) {
        cin >> nums2[i];
    }

    vector<int> result = unionArray(nums1, nums2);

    cout << "Union of arrays: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
