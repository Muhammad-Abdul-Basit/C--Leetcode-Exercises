// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<cctype>
class Solution
{
public:
    std::string reverseVowels(std::string s)
    {
        int length_of_s = s.size();
        int i = 0;
        int j = length_of_s - 1;
        while (i < j)
        {
            if (!isVowel(s[i]))
            {
                i = i + 1;
            }
            else if (!isVowel(s[j]))
            {
                j = j - 1;
            }
            else
            {
                std::swap((s[i]), (s[j]));
                i = i + 1;
                j = j - 1;
            }
        }

        return s;
    }
    bool isVowel(char c)
    {
        c = std::tolower(c);
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
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
