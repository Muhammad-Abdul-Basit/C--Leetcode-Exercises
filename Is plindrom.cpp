// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class Solution {
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }
        int temp_num = x;
        int remainder = 0;
        long reverse_number = 0;
        while (temp_num > 0)
        {
            remainder = temp_num % 10;
            reverse_number = ((reverse_number * 10) + remainder);
            temp_num = temp_num / 10;
        }
        std::cout << reverse_number << std::endl;
        return (reverse_number == x);
    }
};

int main()
{
    Solution my_solution;
   bool x= my_solution.isPalindrome(1121);
   std::cout << x;
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
