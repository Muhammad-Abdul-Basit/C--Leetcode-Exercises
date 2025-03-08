#include<iostream>
#include<vector>
#include<set>
#include<iterator>
#include<algorithm> // Include <algorithm> for std::sort
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> myset;
        for(int i = 0; i < nums.size(); i++) {
            myset.insert(nums[i]);
        }
        nums.clear();
        for(auto it = myset.begin(); it != myset.end(); it++) {
            nums.push_back(*it);
        }
        return nums.size();
    }
};

int main() {
    vector<int> myvector = {7, 4, 5, 6, 3, 1, 4, 7};
    sort(myvector.begin(), myvector.end()); // Sort the vector first
    Solution mysolution;
    mysolution.removeDuplicates(myvector); // Call removeDuplicates without assigning the return value
    for(int i = 0; i < myvector.size(); i++) {
        cout << myvector[i] << ",";
    }
    return 0;
}

