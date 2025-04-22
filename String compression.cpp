// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include<map>
#include<string>
#include<cstring>
class Solution {
public:
    int compress(std::vector<char>& chars) {
        std::string compressed_str;
        int length_of_chars = chars.size();
        if (length_of_chars == 1)
        {
            compressed_str.push_back(chars[0]);
            int length = compressed_str.size();
            return length;
        }
        typedef std::multimap <char, int> mytype;
        mytype char_freq;
        char current_element = chars[0];
        int count = 1;
        for (int i = 1; i < length_of_chars; i++)
        {
            if (chars[i] == current_element) {
                count++;
            }
            else {
                char_freq.insert(mytype::value_type(current_element, count));
                current_element = chars[i];
                count = 1;
            }
        }
        char_freq.insert(mytype::value_type(current_element, count));
        int index = 0;
        for (auto const& it : char_freq) {
            chars[index++] = it.first;
            if (it.second > 1) {
                std::string freq_str = std::to_string(it.second);
                for (char c : freq_str)
                {
                    chars[index++] = c;
                }
            }
        }
        return index;
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
