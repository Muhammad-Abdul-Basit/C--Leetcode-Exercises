// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<stack>
class Solution {
 public:
    std::string removeStars(std::string s)
    {
        std::stack<char&> s_stack;
        for (char character: s)
        {
            if (character == '*')
            {
                if (!s_stack.empty()) // if character is '*', first dont push on stack. 2nd pop left element of string that is already push on stack.
                {
                    s_stack.pop();
                }
            }
            else 
            {
                s_stack.push(character);
            }
        }
        std::string result;
        while (!s_stack.empty())
        {
            result.push_back(s_stack.top());
            s_stack.pop();
        }
        std::reverse(result.begin(), result.end());
        return result;
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
