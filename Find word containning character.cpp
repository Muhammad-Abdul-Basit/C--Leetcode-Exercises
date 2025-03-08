// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<string>
class Solution
{
    public:
    std::vector<int> findWordsContaining(std::vector<std::string>& words, char x)
    {
        std::vector<int> index_of_character;
        for (int i = 0; i < words.size(); ++i)
        {
            const std::string& word=words[i]; 
            for (auto character = word.begin(); character != word.end(); ++character)
            {
                if (*character == x)
                {
                    index_of_character.push_back(i); 
                    break;  
                }
            }
        }
        return index_of_character;
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
