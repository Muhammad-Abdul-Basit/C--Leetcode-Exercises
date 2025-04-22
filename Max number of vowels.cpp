// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
class Solution
{
public:
    int maxVowels(std::string s, int k)
    {
        int max_vowels = 0;
        int vowel_count = 0;
        for (int i = 0; i < k; i++)
        {
            if (isVowel(s[i]))
            {
                vowel_count++;
            }
        }
        max_vowels = vowel_count;
        if (max_vowels == k)
        {
            return max_vowels;
        }
        for (int i = k; i < s.size(); i++)
        {
            if (isVowel(s[i - k]))
            {
                vowel_count--;
            }
            if (isVowel(s[i]))
            {
                vowel_count++;
            }
            max_vowels = std::max(max_vowels, vowel_count);
        }
        return max_vowels;
    }
    bool isVowel(char c)
    {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
};
int main()
{
    std::cout << "Hello World!\n";
}
