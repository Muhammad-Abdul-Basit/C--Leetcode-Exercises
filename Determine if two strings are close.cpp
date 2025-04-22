// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<map>
#include<set>
class Solution
{
 public:
    bool closeStrings(std::string word1, std::string word2)
    {
        if (word1.size() != word2.size())
        {
            return false;
        }
        std::map <char, int> word1_map;
        std::map <char, int> word2_map;
        for (char word : word1)
        {
            word1_map[word]++;
        }
        for (char word : word2)
        {
            word2_map[word]++;
        }
        if (word1_map.size() != word2_map.size()) // check both string have same same set of characters. like str1=aaa and str2=abc, in this case str1 size is "1" 
        {                                         // and str2 is 3.
            return false; 
        }
        for (auto chr : word1_map)
        {
            if (word2_map.find(chr.first) == word2_map.end())
            {
                return false;
            }
        }
        std::multiset <int> word1_set;
        std::multiset <int> word2_set;
        for (auto num : word1_map)
        {
            word1_set.insert(num.second);
        }
        for (auto num : word2_map)
        {
            word2_set.insert(num.second);
        }
        return (word1_set == word2_set);
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
