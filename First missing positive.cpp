// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<set>
class Solution {
public:
    int firstMissingPositive(std::vector<int>& nums)
    {
        std::set<int> unique_sorted_array;
        for (int elements : nums)
        {
            if (elements > 0)
            {
                unique_sorted_array.insert(elements);
            }
        }
            int missing_num = 1;
            while (unique_sorted_array.count(missing_num) > 0)
            {
                missing_num++;
            }
            return missing_num;
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
