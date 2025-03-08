#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<iterator>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    	vector<int> temp_num;
        for (int i = 0; i < nums1.size(); i++) {
            temp_num.push_back(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); i++) {
            temp_num.push_back(nums2[i]);
        }
        sort(temp_num.begin(), temp_num.end());
        double median;
        int middle = temp_num.size() / 2;
        if (temp_num.size() % 2 == 0) { // If the size of the array is even
            median = (temp_num[middle] + temp_num[middle - 1]) / 2.0; // Calculate median for even-sized array
        } else { // If the size of the array is odd
            median = temp_num[middle]; // Median is the middle element
        }
        return median;
    }
};
int main() {
	   vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};

    Solution sol;
    double median = sol.findMedianSortedArrays(nums1, nums2);

    cout << "Median: " << median << endl;
    return 0;
}

