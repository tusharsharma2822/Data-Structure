#include <bits/stdc++.h>
using namespace std;

vector<int> unionArray(vector<int> nums1, vector<int> nums2) {
    vector<int> result;
    int i = 0, j = 0;

    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] < nums2[j]) {
            if (result.empty() || result.back() != nums1[i]) {
                result.push_back(nums1[i]);
            }
            i++;
        }
        else if (nums2[j] < nums1[i]) {
            if (result.empty() || result.back() != nums2[j]) {
                result.push_back(nums2[j]);
            }
            j++;
        }
        else {
            if (result.empty() || result.back() != nums1[i]) {
                result.push_back(nums1[i]);
            }
            i++;
            j++;
        }
    }

    // Remaining elements in nums1
    while (i < nums1.size()) {
        if (result.empty() || result.back() != nums1[i]) {
            result.push_back(nums1[i]);
        }
        i++;
    }

    // Remaining elements in nums2
    while (j < nums2.size()) {
        if (result.empty() || result.back() != nums2[j]) {
            result.push_back(nums2[j]);
        }
        j++;
    }

    return result;
}

int main() {
    int size1;
    cout << "Enter the size of first array: ";
    cin >> size1;

    vector<int> nums1(size1);
    cout << "Enter elements of first array (sorted): ";
    for (int i = 0; i < size1; i++) {
        cin >> nums1[i];
    }

    int size2;
    cout << "Enter the size of second array: ";
    cin >> size2;

    vector<int> nums2(size2);
    cout << "Enter elements of second array (sorted): ";
    for (int i = 0; i < size2; i++) {
        cin >> nums2[i];
    }

    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    vector<int> result = unionArray(nums1, nums2);

    cout << "Union of arrays: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
