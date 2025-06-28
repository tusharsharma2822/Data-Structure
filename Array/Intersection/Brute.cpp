#include<bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> nums1, vector<int> nums2){
    vector<int> result;
    for (int i = 0; i < nums1.size(); i++){
        for (int j = 0; j < nums2.size(); j++){
            if (nums1[i] == nums2[j]){
                if(find(result.begin(), result.end(), nums1[i]) == result.end()){
                    result.push_back(nums1[i]);
                }
                break;
            }  
        }
    }
    return result;
}

int main(int argc, char const *argv[]){
    int size1;
    cout << "Enter the size of first array: ";
    cin >> size1;

    vector<int> nums1(size1);
    for(int i=0;i<nums1.size();i++){
        cin >> nums1[i];
    }

    int size2;
    cout << "Enter the size of second array: ";
    cin >> size2;

    vector<int> nums2(size2);
    for(int i=0;i<nums2.size();i++){
        cin >> nums2[i];
    }

    vector<int> result = intersection(nums1, nums2);

    for(int i=0;i<result.size();i++){
        cout << result[i] << " ";
    }

    return 0;
}
