#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;

        // Merge arrays
        for(int i = 0; i < nums1.size(); i++) {
            merged.push_back(nums1[i]);
        }
        for(int i = 0; i < nums2.size(); i++) {
            merged.push_back(nums2[i]);
        }

        // Sort merged array
        sort(merged.begin(), merged.end());

        int n = merged.size();

        // Find median
        if(n % 2 == 0) {
            return (merged[n/2 - 1] + merged[n/2]) / 2.0;
        } else {
            return merged[n/2];
        }
    }
};

int main() {
    Solution obj;

    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;

    vector<int> nums1(n1);
    cout << "Enter elements of first array:\n";
    for(int i = 0; i < n1; i++) {
        cin >> nums1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;

    vector<int> nums2(n2);
    cout << "Enter elements of second array:\n";
    for(int i = 0; i < n2; i++) {
        cin >> nums2[i];
    }

    double result = obj.findMedianSortedArrays(nums1, nums2);

    cout << "Median: " << result << endl;

    return 0;
}
