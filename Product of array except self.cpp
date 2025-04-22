// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
class Solution
{
 public:
    std::vector<int> productExceptSelf(std::vector<int>& nums)
    {
        int size_of_nums = nums.size();
        std::vector<int> result(size_of_nums, 1);
        int left_product = 1;
        for (int i = 0; i < size_of_nums; i++)
        {
            result[i] = result[i] * left_product;
            left_product = left_product * nums[i];
        }
        int right_product = 1;
        for (int i = size_of_nums - 1; i >= 0; i--)
        {
            result[i] = result[i] * right_product;
            right_product = right_product * nums[i];
        }
        return result;
    }
};
int main() {
    std::vector<int> nums = { 1, 2, 3, 4 };
    Solution solution;
    std::vector<int> result = solution.productExceptSelf(nums);

    std::cout << "Product of elements except self: ";
    for (int product : result) {
        std::cout << product << " ";
    }
    std::cout << std::endl;

    return 0;
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
