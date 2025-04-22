// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
class Solution
{
 public:
    bool increasingTriplet(std::vector<int>& nums)
    {
        int size_of_nums = nums.size();
        for (int i = 0; i < size_of_nums; i++)
        {
            for (int j = i+1; j < size_of_nums; j++)
            {
                if (nums[i] < nums[j])
                {
                    for (int k = j + 1; k < size_of_nums; k++)
                    {
                        if (nums[j] < nums[k])
                        {
                            return true;
                        }
                    }
                }
            }
        }
        return false;
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
