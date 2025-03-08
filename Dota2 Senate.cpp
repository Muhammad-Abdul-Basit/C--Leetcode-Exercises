// Dota2 Senate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<queue>
class Solution
{
    public:
        std::string predictPartyVictory(std::string senate)
        {
            std::queue<int> R, D;
            int total_senate_members = senate.size();
            for (int i=0;i< senate.size();i++)
            {
                if (senate[i] == 'R')
                {
                    R.push(i);
                }
                else
                {
                    D.push(i);
                }
            }
            while (!R.empty() && !D.empty())
            {
                int r_turn = R.front();
                R.pop();
                int d_turn = D.front();
                D.pop();
                if (r_turn < d_turn)
                {
                    R.push(r_turn + total_senate_members);
                }
                else
                {
                    D.push(d_turn + total_senate_members);
                }
            }
            return R.empty() ? "Dire" : "Radiant";
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
