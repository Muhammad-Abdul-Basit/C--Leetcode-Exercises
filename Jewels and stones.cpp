#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for (auto it = stones.begin(); it != stones.end(); it++) {
            for (auto ij = jewels.begin(); ij != jewels.end(); ij++) {
                if (*it == *ij) {
                    count++;
                }
            }
        }
        return count;
    }
};

int main() {
    Solution solution;

    string jewels = "aA";
    string stones = "aAAbbbb";

    int numJewels = solution.numJewelsInStones(jewels, stones);

    cout << "Number of jewels in stones: " << numJewels << endl;

    return 0;
}
