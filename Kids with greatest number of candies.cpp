// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<algorithm>
class Solution
{
public:
    std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies)
    {
        std::vector<bool> greatest_candies_kids;
        auto max_element = std::max_element(candies.begin(), candies.end());
        for (int i : candies)
        {
            if ((i + extraCandies) >= *max_element)
            {
                greatest_candies_kids.push_back(true);
            }
            else
            {
                greatest_candies_kids.push_back(false);
            }
        }
        return greatest_candies_kids;
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
