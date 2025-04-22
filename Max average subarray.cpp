// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
class Solution
{
 public:
    double findMaxAverage(std::vector<int>& nums, int k)
    {
        double avg=0.0;
        int size = nums.size();
        if (size == 1 && k == 1)
        {
            avg = static_cast<double>(nums[0]) / k;
            return (avg);
        }
        int window_sum = 0;;
        int highest_sum = INT_MIN;
        for (int i = 0; i < k; i++)
        {
            window_sum = window_sum+ nums[i];
        }
        highest_sum = window_sum;
        for (int i = k; i < size; i++)
        {
            window_sum = window_sum - nums[i - k] + nums[i];
            if (window_sum > highest_sum)
            {
                highest_sum = window_sum;
            }
        }
        avg = static_cast<double> (highest_sum) / k;
        return avg;
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
