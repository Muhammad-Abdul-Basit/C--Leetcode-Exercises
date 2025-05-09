// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
class Solution 
{
 public:
    int maxArea(std::vector<int>& height) 
    {
        int right = height.size() - 1;
        int left = 0;
        int heighest_water = 0;
        int temp_water=0;
        while (left <  right)
        {
            int width = right - left;
            if (height[left] < height[right])
            {
                temp_water=(height[left])* (width);
                left++;
            }
            else
            {
                temp_water = (height[right]) * (width);
                right--;
            }
            if (temp_water > heighest_water)
            {
                heighest_water = temp_water;
            }
        }
        return heighest_water;
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
