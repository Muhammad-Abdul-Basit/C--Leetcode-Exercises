// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
class Solution
{
 public:
    bool uniqueOccurrences(std::vector<int>& arr)
    {
        std::unordered_map<int, int> count_map;
        for (int num : arr)
        {
            count_map[num]++;
        }
        std::unordered_set<int> occurrences_set;
        for (auto& num : count_map)
        {
            occurrences_set.insert(num.second);
        }
        return (occurrences_set.size() == count_map.size());
    }
};
int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
