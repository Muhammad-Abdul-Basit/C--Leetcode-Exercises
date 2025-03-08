// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<unordered_map>
#include<string>
class Solution
{
 public:
    int equalPairs(std::vector<std::vector<int>>& grid)
    {
        std::unordered_map<std::string, int> row_map; // Will convert every row into string and will calculate, that how many times it will repeated.
        std::unordered_map<std::string, int> col_map; // Will convert every column into string and will calculate, that how many times it will repeated.
        for (int i = 0; i < grid.size(); i++)
        {
            std::string row_string="";
            for (int j = 0; j < grid.size(); j++) // Make a map of every row and calculate it how many times a row is repeated.
            {
                row_string = row_string + std::to_string(grid[i][j]) + ",";
            }
            row_map[row_string]++; // whenever row completed, int part of map incremented
        }
        for (int j = 0; j < grid.size(); j++) // Make a map of every column and calculate it how many times a column is repeated.
        {
            std::string col_string = "";
            for (int i = 0; i < grid.size(); i++)
            {
                col_string = col_string + std::to_string(grid[i][j]) + ",";
            }
            col_map[col_string]++;//// whenever column completed, int part of map incremented
        }
        int count = 0;
        for (const auto& row_pair : row_map)
        {
            const std::string& row_key = row_pair.first;   
            count = count + (row_pair.second*col_map[row_key]); // row key is row of matrix, and check whether is it available in column. 
        }
        return count;
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
