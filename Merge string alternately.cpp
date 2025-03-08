// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
class Solution 
{
    public:
    std::string mergeAlternately(std::string word1, std::string word2)
    {
        std::string merge_string;
        int length_1 =0;
        int length_2 =0;
        while (length_1< word1.size() || length_2 < word2.size())
        {
            if (length_1 < word1.size())
            {
                merge_string= merge_string+ word1[length_1];
                length_1++;
            }
            if (length_2 < word2.size())
            {
                merge_string = merge_string + word2[length_2];
                length_2++;
            }
        }
        return merge_string;
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
