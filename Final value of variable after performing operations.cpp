#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
class Solution 
{
public:
    int finalValueAfterOperations(vector<string>& operations)
    {
        int x = 0;
        for (const auto& op : operations)
        {
            if (op == "++X" || op == "X++")
                ++x;
            else if (op == "--X" || op == "X--")
                --x;
        }
        return x;
    }
};

int main()
{
    vector<string> mystring = {"--X","X++","++X","X++"};
    class Solution my_solution;
  int number= my_solution.finalValueAfterOperations(mystring);
  cout << number;
    return 0;
}